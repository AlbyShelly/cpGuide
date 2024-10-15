#include<array>
#include<iostream>
#include<unordered_set>

using namespace std;

int main(){

    array<int, 5> arr1 = {5, 2, 8, 9, 4};
    array<int, 4> arr2 = {3, 2, 9, 5};

    int count = 0;
    unordered_set<int> s1, s2;
    
    for(auto x: arr1)
        s1.insert(x);
    
    for(auto x: arr2)
        if(s1.find(x) != s1.end())
            count++;
    
    cout << count << "\n";
}
