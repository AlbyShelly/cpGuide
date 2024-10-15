#include<iostream>

using namespace std;

int MOD = 1000000007; 

int main(){

    cout << "MOD: " << MOD << endl;
    
    long answer = 1;
    for(int i = 1; i <= 100; i++){
        answer= (answer*i)%MOD;
    }
    cout << answer << endl;
}
