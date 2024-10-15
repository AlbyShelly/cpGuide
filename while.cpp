#include<climits>
#include<iostream>

using namespace std;

int fooFunction(int );

int main(){

    cout << fooFunction(1) << endl;
    cout << fooFunction(2) << endl;
    cout << fooFunction(100) << endl;
    cout << fooFunction(1000) << endl;


    //to find where value of fooFunction changes
    int i = 0;
    
    //increment i till function return true
    //while(!fooFunction(++i));

    //cout << "flux point: " << i << endl;


    //binary search implimentation
    //what i know is the answer is between 0 and 100000000
    //so first search at a+b/2
    //  if false
    //      search 0, a+b/2
    //  else
    //      search a+b/2, b
    
    int a = 0;
    int b = INT_MAX;
    
    while(a+1 != b){
        
//        cout << "a: " << a << endl << "b: " << b << endl;        
        int mid = (a+b)/2;
 //
//        cout << "mid: " << mid << endl;
        
        if( fooFunction(mid) ){

            a = a;
            b = mid;
//            cout << "true" << endl;
        }else{

            a = mid;
            b = b;
 //           cout << "false" << endl;
        }
    }
            
    cout << "a: " << a << endl << "b: " << b << endl;

}


int fooFunction(int x){

    if(x >= 500000)
        return 1;
    else
        return 0;

}
