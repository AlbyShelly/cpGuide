#include<bits/stdc++.h>

using namespace std;

int fib(int );

int main(){

    cin.tie(0);
    ios::sync_with_stdio(0);
    
    int n = 7;
    cout << "Fibonacci number is: " << fib(n) << endl;

}

int fib(int a){
    if(a == 0)
       return 0;
    if(a == 1)
       return 1;

    return fib(a-1)+fib(a-2); 
    
}
