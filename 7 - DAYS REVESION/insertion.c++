#include<iostream>
#include<algorithm>
using namespace std ; 
 void insertion(int a[] , int size){
    for(int i = 1 ; i < size ; i++){
        int pre = i - 1 ; 
        int curr = a[i] ;
        while(pre >= 0 && a[pre] > curr){
            a[pre + 1] = a[pre] ; 
            pre-- ; 
        }
      
        a[pre + 1] = curr ; 
    }
    return ; 
 }
 int main()
 {
     int a[5] = {6, 2, 3, 4, 6};
     int size = 5;
     insertion(a, size);
     for (int i = 0; i < size; i++)
     {
         cout << a[i];
     }
     return 0;
 }