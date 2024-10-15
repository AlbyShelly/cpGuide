#include<algorithm>
#include<array>
#include<iostream>

#define print(array) for(int i = 0; i< array.size(); i++) cout << array[i] << " " ; cout << endl
using namespace std;


int main(){
    
    array<int, 8> arr = {2, 3, 12, 11, 7, 8, 9, 3};
    print(arr);

    sort(arr.begin(), arr.end() );
    print(arr);

    auto r = equal_range(arr.begin(), arr.end(), 3);
    cout << r.second - r.first << endl;    
}
