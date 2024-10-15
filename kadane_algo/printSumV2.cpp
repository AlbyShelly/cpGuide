#include<iostream>
#define print(arr) for(int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++) cout << arr[i] << " "; cout << "\n";
using namespace std;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n = 5;    
    int array[] = {1, 2, 3 ,4 ,5};    
    int best = 0;

    for (int a = 0; a < n; a++) {
        int sum = 0;

        for (int b = a; b < n; b++) {
            sum += array[b];
            best = max(best,sum);
            cout << "sum: " << sum << " \n";
        }
    }
    //cout << best << "\n";
}
