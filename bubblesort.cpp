#include<iostream>
#include<utility>
using namespace std ; 
int main(){
 int a[5] = {5,4,7,2,3} ; 
 int n = 5 ; 
 for(int i = 1 ; i < n  ; i++){
   int surr = a[i] ; 
   int pre = i - 1 ; 
   while(pre>=0  && a[pre] > surr){
            a[pre+1] = a[pre] ; 
            pre-- ; 
   }
   a[pre+1] = surr ; 
 }
 for(int i = 0 ; i < n ; i ++){
    cout << a[i] ;
 }
}