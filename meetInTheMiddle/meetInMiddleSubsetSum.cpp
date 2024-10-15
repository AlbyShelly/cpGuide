#include<bits/stdc++.h>

#define print(x){ for(auto i: x) cout << i << " "; cout << "\n"; }
using namespace std;

vector<int> sum1;
vector<int> sum2;
vector<int> temp1;
vector<int> temp2;

vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
int n = vec.size();
int m = n/2;
int k = 137;

void search(int k, vector<int>& set, vector<int>& sumset, vector<int>& temp){

    if(k == n/2){
        sumset.push_back(accumulate(temp.begin(), temp.end(), 0));
    }else{
        search(k+1, set, sumset, temp);
        temp.push_back(set[k]);
        search(k+1, set, sumset, temp);
        temp.pop_back();
    }
}



int main(){
    
    vector<int> set1(vec.begin(), vec.begin()+m);
    vector<int> set2(vec.begin()+m, vec.end());

    search(0, set1, sum1, temp1); 
    search(0, set2, sum2, temp2);

    
    sort(sum1.begin(), sum1.end());
    sort(sum2.begin(), sum2.end()); 
    
    int i = 0;
    int j = sum2.size() - 1;

    while(i<sum1.size() && j>-1){
        
        int sum = sum1[i] + sum2[j];

        if(sum == k){
            cout << "possible\n";
            exit(0);
        }else if(sum < 15){
            i++;
        }else{
            j--;
        }
    }

    cout << "Not possible\n";
}
