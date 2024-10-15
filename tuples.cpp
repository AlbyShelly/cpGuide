#include<bits/stdc++.h>

using namespace std;


int main(){

    tuple<int, string> t1(1,"alby"); 
    cout << get<0>(t1) << endl;
    cout << get<string>(t1) << endl;
}
