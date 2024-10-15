#include<bits/stdc++.h>

using namespace std;

int n = 4;

vector<int> s;

void search(int k){
        
    s.push_back(k);
    vector<int> t(s.begin(), s.end());
        
    if(s.size() == n){
        cout << "permutation: ";
        
        for(auto i: s)
            cout << i << " ";
            cout << "\n";

    }

    for(int i =0; i<n; i++){

        if(find(t.begin(), t.end(), i) == t.end()){
            search(i);
            }
    }
    s.pop_back();
}

void search(void){
    
    for(int i = 0; i<n; i++)
        search(i);
}

int main(){
    
    search();    

}

