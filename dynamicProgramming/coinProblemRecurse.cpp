#include<bits/stdc++.h>

using namespace std;
const vector<int> c = {1, 3, 4};
int calls = 0;
int intend = 0;
int solve(int x){
    
    calls++;
    for(int i = 0; i<intend; i++) cout << " "; cout << "solve(" << x << ")\n";
    if(x < 0) return INT_MAX;
    if(x == 0) return 0;
    
    intend++;
    int temp =  min(solve( x-4), min(solve(x-3), solve(x-1)) )+1;
    intend--;

    return temp;
}
  
int main(int argc, char **argv){
    if(argc != 2) return 1;
    cout << solve( stoi(argv[1] ) ) << "\n";
    cout << "calls: " << calls << "\n";

}
