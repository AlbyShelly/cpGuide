#include<array>
#include<iostream>

using namespace std;

int choose(int, int);
int factorial(int);
void  print(int, int, array<int> );

int size;

int main(){
   
   array<int, 4> arr = {1, 2, 3, 4}; 
   size = arr.size();

   for(int len = 1; len <= size; len++){

       int set_cnt = choose(size, len);
       int beg = 0;
       int end = len -1;

       for(int i = 0; i<set_cnt; i++){
            
           cout << arr[beg] << " ";
           print(beg+1, len-2, arr); 
       }

   }
   
}

int factorial(int n){

    int fact = 1;
    for(int i=1; i<=n; i++)
        fact *= i;
    return fact;
}

int choose(int n, int r){
    
    return factorial(n)/( factorial(n-r) * factorial(r) );
}

void print(int from, int len, array<int> arr){
    
    for(int i = 0; i < len; i++){
        cout << arr[from] << " ";     
        from = (from + 1) % size;
    }
}

