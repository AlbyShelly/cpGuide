#include<bits/stdc++.h>

using namespace std;

vector<int> fib_mem;
int calls;
int fib(int n){
    
    calls++; 
    if(fib_mem[n] != -1)
       return fib_mem[n];

    if(n == 0) return 0;
    if(n == 1) return 1;
    int temp = fib(n-1) + fib(n-2);
    fib_mem[n] = temp;
    return temp;
}
int main(int argc, char** argv){
    
    int n = stoi(argv[1]);  
    fib_mem = vector<int> (n+1, -1);
    for(auto i: fib_mem) cout << i << " " ; cout << "\n";
    cout << fib(n)  << "\n";
    cout << "calls: " << calls << "\n";
}
