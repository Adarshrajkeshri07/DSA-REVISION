// when each element are exist twice except one ........
#include<iostream>
using namespace std ; 
int unique(int a[] , int size) { 
    int num = 0  ;
    for(int i = 0 ; i < size ; i++){
        num^=a[i] ; 
    }
    return num ; 
    
}
int main(){
    int a[7] = {2,1,2,4,1,3,4} ; 
   int x =  unique(a,7) ; 
   cout << x ;
    return 0 ;
}