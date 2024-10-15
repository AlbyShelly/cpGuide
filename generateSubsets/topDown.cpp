#include<bits/stdc++.h>
#define print(x) for(auto i: x) cout << i << " "; cout << "\n";
using namespace std;

int main(){
    
//    ios::sync_with_stdio(0);
 //   cin.tie(0);
    vector<vector<int>> subsets;
    subsets.push_back(vector<int>());

    array<int, 7> arr = {1, 2, 3, 4, 5, 6, 7};
    int ptr = 0;

    while(ptr<arr.size()){
        
        int limit = subsets.size();
        int lmt_cntr = 0;
        
        /*for(auto set: subsets){
            
            if(lmt_cntr++ == limit)
                break;
            
            print(set);
            set.push_back(arr[ptr]);
            cout << "set to be pushed: " << "\n";
            print(set);
            subsets.push_back( set );
        }*/

        for (int i = 0; i < limit; ++i) {
            auto set = subsets[i];  // Copy the current set
            set.push_back(arr[ptr]);  // Modify the copy
            subsets.push_back(set);  // Push the modified copy
        }
        
        ++ptr;
    }
    
    for(auto set: subsets){
        print(set);
    }

}
