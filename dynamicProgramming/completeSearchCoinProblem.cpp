#include<bits/stdc++.h>
#define print(arr) for(auto i: arr) cout << i << " "; cout << "\n";

using namespace std;

int best = INT_MAX; 
int s = 0;
vector<int> c = {1, 3, 4};
int n;
int sum = 0;
int calls = 0;
int i;
vector<int> dept;

void search(){
    //printing the recursive tree
    //for(int j = 0; j<s; j++) cout << " "; cout << "search(" << s << ", " << sum << ")\n"; 
    calls++;

    if(sum > n) return;
    
    if(sum == n){
        best = min(best, s);
        return;
    }
    if(dept[sum] != INT_MAX){

        best = min(best, s+dept[sum]);
        //cout << best << "=min(" << best << "," << s << "+" << dept[sum] << ")\n";
        return;
    }

    for(int i = 0; i<3; i++){
        
        sum += c[i];
        s++;
        search();
        
        //memorization
        if(sum <= n)
            dept[sum] = best - s;

        sum -= c[i];
        s--;
    }
}

int main(int argc, char** argv){
    
    if(argc != 2) return 1;
    n = stoi(argv[1]);
    dept = vector<int> (n, INT_MAX);
    search();
    cout << "best: " << best << "\n";
    cout << "calls: " << calls << "\n";

}
