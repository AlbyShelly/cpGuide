#include<climits>
#include<iostream>

using namespace std;

int fooFunction(int );

int main(){


    int k = 0;
    int n = 1000000;
    int i = 0; 
    for( int b = n/2; b>0; b /=2){
        
        while( k+b < n && !fooFunction( k+b) ) {
            k+=b;
        }
        
    }

    cout << "K: " << k << "\n";
}


int fooFunction(int x){

    if(x >= 500000)
        return 1;
    else
        return 0;

}
