#include<bits/stdc++.h>

using namespace std;
const vector<int> c = {1, 3, 4};
int calls = 0;

int solve(int x){
    
    calls++;
    if(x < 0) return INT_MAX;
    if(x == 0) return 0;
    
    return min(solve( x-1), min(solve(x-3), solve(x-4)) )+1;
}
  
int main(int argc, char **argv){
    if(argc != 2) return 1;
    cout << solve( stoi(argv[1] ) ) << "\n";
    cout << "calls: " << calls << "\n";

}
