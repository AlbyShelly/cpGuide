#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vec = {1, 2, 3, 4};
    int size = vec.size();

    for(int i = 0; i<(1<<size); i++){
        
        vector<int> v1;

        for(int j = 0; j<size; j++){

            if(i&(1<<j))
                v1.push_back(vec[j]);
            else
                v1.push_back(0);
        }
        
        cout << "v1: ";
        for(auto x: v1)
            cout << x << " ";
        cout << "\n";
    }
}
