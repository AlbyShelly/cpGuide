#include<bitset>
#include<climits>
#include<iostream>

using namespace std;

int main(){

    int x = 1;
    int y = 1 << 5;
    int n = 5;

    cout << x << endl;
    cout << y << endl;
    
    int arr[] = {1, 2, 3, 4, 5}; 
    for(int b = 0; b<(1<<n); b++){
        bitset<10> temp(b);
        
        for(int i = 0; i<10; i++){
            if(temp[i])
                cout << arr[i] << " ";
        }
        cout << "\n";
    }    
}
