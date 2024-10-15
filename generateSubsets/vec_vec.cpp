#include<bits/stdc++.h>

using namespace std;
void print(vector<int> x);
int main(){

    vector<vector<int>> vec;
    vec.push_back(vector<int>());
    
    vector<int> v1 = {1};
    vec.push_back(v1);

    vector<int> v2 = {2};
    vec.push_back(v2);

    vector<int> v3 = {1, 2};
    vec.push_back(v3);

    for(auto x: vec)
        print(x);

}

void print(vector<int> x){

    for(auto i: x)
        cout << i << " ";
    cout << "\n";
}
