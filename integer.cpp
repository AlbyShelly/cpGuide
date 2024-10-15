#include<iostream>

using namespace std;

int main(){
    
    cin.tie(0);
    cout << sizeof(int) << endl; //2^31 - 1
    cout << sizeof(long) << endl; //2^61 -1 

    int a = 300000;
    long b =  (long)a *a;
    cout << b << endl;
}
