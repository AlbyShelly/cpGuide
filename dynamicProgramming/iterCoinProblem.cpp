#include<bits/stdc++.h>

using namespace std;
const vector<int> c = {1, 3, 4};

int main(int argc, char **argv){

    if(argc != 2) return 0;
    
    int n = stoi(argv[1]);
    vector<int> value(n+1, INT_MAX);
    vector<int> first(n+1, INT_MAX);
    value[0] = 0;

    for(int i = 1; i<=n; i++){
        value[i] = INT_MAX;
        
        for(auto j: c){
            if( (i-j) >= 0)
                value[i] = min(value[i], value[i-j]+1);
        }
    }
    
    for(int i = 0; i<n+1; i++){
        cout << value[i] << " ";
    }
    cout << "\n";
}

