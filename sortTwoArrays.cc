#include<algorithm>
#include<array>
#include<iostream>

using namespace std;

int main(){

    array<int, 5> arr1 = {5, 2, 8, 9, 4};
    array<int, 4> arr2 = {3, 2, 9, 5};

    sort(arr1.begin(), arr1.end()); 
    sort(arr2.begin(), arr2.end()); 
    
    int ptr1 = 0; 
    int ptr2 = 0;
    int count = 0;
    
    int len = arr1.size() < arr2.size() ? arr2.size() : arr1.size();

    while(ptr1<len && ptr2<len){
        int ele1 = arr1[ptr1];
        int ele2 = arr2[ptr2];

        if(ele1 == ele2){
           count++; 
           ptr1++;
           ptr2++;
        }else if(ele1 < ele2)
            ptr1++;
        else
            ptr2++;

    }
    
    /*for loop implementation of two pointers  
    
    count = 0;
    for(int ptr1 = 0, ptr2 = 0; ptr1<len && ptr2<len;){
        
        int ele1 = arr1[ptr1];
        int ele2 = arr2[ptr2];

        if(ele1 == ele2){
           count++; 
           ptr1++;
           ptr2++;
        }else if(ele1 < ele2)
            ptr1++;
        else
            ptr2++;

    }

    */
    cout << count << "\n";
}
