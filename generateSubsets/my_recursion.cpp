#include<bits/stdc++.h>

using namespace std;

vector<int> vec ;
int n;
array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void search(int k){
    
    if(k==n){

        cout << "vec: ";
        
        for(auto x: vec)
            cout << x << " ";

        cout << "\n";    

        return;
    } 
    
    vec.push_back(arr[k]);
    search(k+1);
    vec.pop_back();
    search(k+1);
}

int main(){

    n = arr.size();
    search(0);
}
