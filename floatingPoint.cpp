#include<bits/stdc++.h>

using namespace std;

int main(){

    double x = 0.3*3 + 0.1;
    double y = 1;
    cout << setprecision(20) << y << endl;
    printf("%.20f\n", y);
    cout << setprecision(20) << x << endl;
    printf("%.20f\n", x);

    if( abs(x-y) < 1e-9 ){
        cout << "both are equal\n";
    }
}
