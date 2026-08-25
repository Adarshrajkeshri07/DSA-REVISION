#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int a[6] = {0,2,1,0,2,1} ; 
    int n = 6 ; 
    int st = 0 , mid = 0 , end = n - 1 ; 
   while (mid <= end)
   {
    if(a[mid] == 0 ){
        swap(a[mid] , a[st]) ; 
        st++ , mid++ ; 
    }
    else if(a[mid] == 1){
        mid++ ; 
    }
    else {
        swap(a[mid] , a[end]) ; 
        end-- ; 
    }
   }
   for(int i = 0 ; i < n ; i++){
    cout<< a[i] << " " ; 
   }
   return 0 ; 
   
}