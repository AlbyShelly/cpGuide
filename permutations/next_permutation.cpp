#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> vec;
    int n = 5;
    for(int i = 0; i < n; i++)
        vec.push_back(i);

    do{
        
        //process premutation
        for(auto x: vec)
            cout << x << " ";
        cout << "\n";

    }while(next_permutation(vec.begin(), vec.end()));
}
