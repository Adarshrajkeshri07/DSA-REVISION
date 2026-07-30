#include<iostream>
using namespace std ; 
void majority(int a[] , int size) {
    int freq = 0  ; 
    int i = 0 , j = size - 1 ; 
   int ans = a[i] ; 
   while(i < size ){
    if(freq==0){
        ans = a[i] ; 
    }
    if(ans == a[i]){
        freq++; 
    }else 
    {
        freq--; 
    }
    i++;
   }
  cout << ans ;
}
int main(){
    int a[5] = {1,4,1,4,1} ; 
    majority(a,5) ; 
    return 0 ;
}