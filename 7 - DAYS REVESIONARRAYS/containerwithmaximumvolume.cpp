#include<iostream>
#include<algorithm>
using namespace std ; 
int maxarea(int a[] , int size ){
     int st = 0 , end = size - 1 ; 
     int ans =   0 ;
     while(st < end){
         int h = min(a[st], a[end]);
         int b = end - st;
         int area = h * b;
         ans = max(area , ans) ;
         if(a[st] < a[end]){
            st++ ; 
         }else {
            end-- ; 
         }
     }
     return ans ;   
}
int main(){
    int  height[9] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    int n = 9 ; 
    int ans = maxarea(height , n) ; 
    cout << ans ; 
    return 0 ; 
}