#include<bits/stdc++.h>

#define print(x){ for(auto i: x) cout << i << " "; cout << "\n"; }
using namespace std;
void search(int);

vector<int> sum1;
vector<int> subset;
vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
int n = vec.size();
int k = 137;
int main(){

    search(0);
    for(auto i: sum1)
        if(i == k){
            cout << "Possible\n";
            exit(0);
        }
    cout << "Not possible\n";

}

void search(int k){

    if(k == n){

        sum1.push_back(accumulate(subset.begin(), subset.end(), 0));

    }else{

        search(k+1);
        subset.push_back(vec[k]);
        search(k+1);
        subset.pop_back();
    }
}
