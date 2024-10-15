#include<iostream>

using namespace std;

int main(){

int array[] = {1, 2, 3, 4, 5};
int n = 5;
int best = 0;
for (int a = 0; a < n; a++) {
    int sum = 0;
    for (int b = a; b < n; b++) {
        sum += array[b];
        cout << "Subarray from index " << a << " to " << b << ": Sum = " << sum << endl;
        best = max(best, sum);
    }
}
cout << "Maximum sum: " << best << "\n";

}
