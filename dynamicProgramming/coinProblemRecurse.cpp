#include<bits/stdc++.h>

using namespace std;
const vector<int> c = {1, 3, 4};
int calls = 0;
int intend = 0;
vector<int> solve_ans;
vector<int> first_ans;
int parent;

int solve(int x){
     
    calls++;
    
    if(x < 0) return INT_MAX;
    if(x == 0) return 0;


    if(solve_ans[x] != INT_MAX)
        return solve_ans[x];

    parent = x;
    solve_ans[x] =  min(solve( x-4), min(solve(x-3), solve(x-1)) )+1;
    first_ans[x] = min(parent-x, first_ans[parent]);
    return solve_ans[x];
}
  
int main(int argc, char **argv){

    if(argc != 2) return 1;

    int n = stoi(argv[1]);
    solve_ans = vector<int>(n+1, INT_MAX);
    first_ans = vector<int>(n+1, INT_MAX);

    cout << solve(n) << "\n";
    cout << "calls: " << calls << "\n";

    for(auto i: first_ans)
        cout << i << " ";
    cout << "\n";
}
