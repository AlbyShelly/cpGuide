#include<algorithm>
#include<array>
#include<iostream>
using namespace std;

int main(){

    array<int,50> arr = {
        87, 23, 45, 12, 99, 34, 56, 78, 13, 67,
        89, 24, 53, 91, 36, 77, 84, 29, 42, 61,
        73, 15, 66, 38, 92, 51, 79, 28, 49, 85,
        14, 62, 97, 31, 54, 71, 20, 86, 35, 93,
        47, 58, 16, 81, 39, 65, 74, 19, 90, 25
    };

    sort(arr.begin(), arr.end());
    
    for(int i =0; i< 50 ; i++)
        cout << i << ": " << arr[i] << "\n";

    int x = 20;
    int n = 50;
    int k = 0;
    
    for(int b = n/2; b >= 1; b /= 2){
        
        cout << "int k: " << k << endl;  
        cout << "int b: " << b << endl;

        while(k+b < n && arr[k+b] <= x){
            k += b;
            
            cout << "int k: " << k << endl;
        }
    }
    
    if( arr[k] == x)
        cout << "Element found at index: " << k << "\n";
    else
        cout << "Element not found\n"; 

}
