#include<bits/stdc++.h>

using namespace std;

void search( void);

//globals
int size = 5;
bool chosen[5];
vector<int> permutation;

int main(){
    
    search();
}

void search(){

    if(permutation.size() == 5){

        //process premutation
        for(auto x: permutation)
            cout << x << " ";
        cout << "\n";
    
    }else{

        for(int i = 0; i<5; i++){
            if(chosen[i]) continue;
            permutation.push_back(i);
            chosen[i] = true;
            search();

            permutation.pop_back();
            chosen[i] = false;
        }
    }
}
