#include<numeric>
#include<algorithm>
#include<iostream>
#define print(arr, i, j) for(int l =i; l<=j; l++) cout << arr[l] << " " ; cout << endl;
using namespace std;

int main(){
    
    int best=0;

    cin.tie(0);
    ios::sync_with_stdio(0);

    int a[] = {1, 2, 3, 4, 5};

    //print all consecutive sub arrays

    for(int i = 0; i<5; i++){
        for(int j = i; j<5; j++){
//            cout << i << "-" << j << ": "; 
//            print(a, i, j);

            int sum = accumulate(a + i, a + j+1, 0);
            best = max(sum, best);
            cout << "sum: " << sum << " \n";
        }
    }
    cout << "best: " << best << "\n";
}
