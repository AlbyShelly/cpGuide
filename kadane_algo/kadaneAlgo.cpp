#include<iostream>

using namespace std;


int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(0);

//    int arr[] = {1, 2, 4, -3, 5, 2, -5, 2};
    int arr[] = {-1,  2, 4, -3, 5, 2, -5,  2};
    int n = 8;
    int best = 0, sum = 0;
    for (int k = 0; k < n; k++) {

        cout << "Details @" << k << endl;
        sum = max(arr[k],sum+arr[k]);
        cout << "sum " << k <<": " << sum << "\n";
        best = max(best,sum);
        cout << "best " << k <<": " << best << "\n";
    }
    cout << best << "\n";    
}
        


