#include<bits/stdc++.h>
#define print(x) for(auto i: x) cout << i << " " ; cout << "\n";
using namespace std;

int best = INT_MAX; 
//vector<int> res;
int s = 0;
vector<int> c = {1, 3, 4};
int n;
int sum = 0;
void search(){
    
    //int sum = accumulate(res.begin(), res.end(), 0);
    if(sum > n) return;
    
    if(sum == n){
        best = min(best, s);
        return;
    }
    
    for(int i = 0; i<c.size(); i++){
        //res.push_back(c[i]);
        sum += c[i];
        s++;

        search();
    
        //res.pop_back();
        sum -= c[i];
        s--;
    }
}

int main(int argc, char** argv){
    
    if(argc != 2) return 1;
    n = stoi(argv[1]);
    search();
    cout << best << "\n";
}
