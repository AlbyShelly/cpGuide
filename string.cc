#include<iostream>
#include<string>

using namespace std;

int main(){

    string s = "alby";
    string b = s + s;
    cout << b << "\n";

    cout << b.substr(1, 2) << "\n";
    cout << b.find("ay") << "\n";
    cout << string::npos << "\n";
}
