#include<iostream>
using namespace std ;
int main(){
    int arr[5]= {2,5,4,7,8} ; 
    int size = 5 ; 
    int ans = 1 ; 
    int prefix[size]  ; 
     prefix[0] = 1 ;
     int suffix[size] ;
     suffix[size-1] = 1; 
      for(int i = 1 ; i <  size ; i++){
        prefix[i] = prefix[i-1]*arr[i-1];
      }   
      for(int i = size - 2 ; i >= 0 ; i--){
        suffix[i] = suffix[i+1]*arr[i+1] ; 
      }
      for(int i = 0 ; i < size ; i++){
        ans = prefix[i] * suffix[i] ; 
        cout << ans << " " ; 
      }
      return 0 ; 


}