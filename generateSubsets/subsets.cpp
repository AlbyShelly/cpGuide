#include<bits/stdc++.h>

using namespace std;

vector<int> sub;
int k = 5;

void subsets(int n){    
    
    if(n == k){

        // process subset
        cout << "subset: ";
        for(auto x: sub) cout << x << " ";
        if ( accumulate(sub.begin(), sub.end(), 0) == 5)
            cout << "This is OK";
        cout << "\n";
    }else{

        sub.push_back(n);
        subsets(n+1);
        sub.pop_back();
        subsets(n+1);
    }
}
int main(){
    
    subsets(0);
}


