#include<iostream>
#include<vector>

using namespace std;

int cout_call = 0;
vector<int> subset;
int n = 2;
void search(int k) {
    if (k == n) {
        for(auto x: subset)
            cout << x << " ";
        cout_call++;
        cout << "\n";
    } else {
        search(k+1);
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
    }
}


int main(){
    
  search(0);
  cout << "cout_call: " << cout_call << endl;
}
