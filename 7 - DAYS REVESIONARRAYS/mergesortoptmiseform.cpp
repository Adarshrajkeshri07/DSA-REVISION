#include<iostream>
using namespace std ; 
 int main(){
    int a[6] = {1,5,7} ; 
    int b[3] = {2,3,4} ; 
    int m = 3  , n = 3  ; 
    int i = m - 1 , j = n - 1 , index = m + n - 1 ; 
    while(i >= 0 && j >= 0){
        if(a[i] >= b[j]){
            a[index] = a[i] ; 
            index-- , i-- ; 
        }
        else  {
            a[index] = b[j];
            index--, j--;
        }
        
    }
    while (j >= 0)
    {
       a[index] = b[j] ; 
       j--;
    }
    for(int i = 0 ; i < 6 ; i++){
        cout << a[i] << " " ; 

    }
    return 0 ; 
 }