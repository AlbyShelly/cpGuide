#include<iostream>
#include<array>

using namespace std;


int main(){

    array<int, 12> array = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int n = 12;
    int x = 11;
    
    //print array
    for(auto i: array)
        cout << i << " ";
    cout << endl;

    int k = 0;
    for (int b = n/2; b >= 1; b /= 2) {
        cout << "b: " << b << endl;
 
        cout << "k+b: " << k+b << " < " << n << " && " << "array[k+b]: " << array[k+b] << " <= " << x << endl;
        while (k+b < n && array[k+b] <= x){
            k += b;
            
        }        
    }
    if (array[k] == x) {
        cout << "element " << x << " found at: " << k << endl;
    }

}
