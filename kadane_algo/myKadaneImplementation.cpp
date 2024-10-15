#include<iostream>

using namespace std;


int main(){
    
    cin.tie(0);
    ios::sync_with_stdio(0);

    int arr[] = {-1,  2, 4, -3, 5, 2, -5,  2};
    int n = 8;
    int best = 0;
    int sum = 0;
    
    for (int k = 0; k < n; k++) {
        
        sum = max(arr[k], arr[k]+sum);
        best = max(sum, best);
    }
    
    cout << best << "\n";    
}
        


