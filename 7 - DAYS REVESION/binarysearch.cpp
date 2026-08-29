#include<iostream>
using namespace std  ;
int binary(int a[] ,int size ,  int target){
    int st = 0 , end = size - 1 ; 
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid] == target){
            return  mid  ; 
        }else if(a[mid] <  target){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
    }
    return  - 1; 
}
int main(){
    int  nums[7] = { -5, -2, 0, 3, 7, 10, 14 };
   int  target = 7 ;
   int ans = binary(nums , 7  ,target) ; 
   cout << ans ; 
   return 0 ; 


}