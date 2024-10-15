#include<bits/stdc++.h>

using namespace std;

//globals
int n = 6;
vector<int> permutation;
//malloc
bool* chosen =(bool*) malloc(sizeof(bool) *n );
int t = (n-1) * 2;
bool* l_dx =(bool*)  malloc(sizeof(bool) * t);
bool* r_dx =(bool*)  malloc(sizeof(bool) * t);

void search(int k){

    if(k == n){
        
        for(auto x: permutation)
            cout << x << " ";
        cout << "\n";

    }else{

        for(int i = 0; i<n; i++){
        
            if(chosen[i] || l_dx[i+k] || r_dx[k-i+n-1] ) continue;  //r_dx[row - col + 3]

            else{
                permutation.push_back(i);
                chosen[i] = true;
                l_dx[i+k] = true;
                r_dx[k-i+n-1] = true;
                
                search(k+1);

                permutation.pop_back();
                chosen[i] = false;
                l_dx[i+k] = false;
                r_dx[k-i+n-1] = false;
            }
        }
    }
}



int main(int argc, char* argv[]){

    search(0);
}
