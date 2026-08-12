#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {15, 18, 2, 3, 6, 12};
    int target =  6 ; 
    int st = 0 , end = 5 ;
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid]==target){
            cout << mid ;
            return 0  ;
        }else 
        if(a[st]<=a[mid]){
            if(a[st]<= target &&  target < a[mid]){
                end = mid - 1 ; 
            }else 
            st = mid+1 ; 
        }else if(a[mid]<=a[end]){
            if(a[end]>=target && a[mid]<target){
                st = mid + 1 ; 
            }else 
             end = mid - 1 ; 
        }
    }
    return -1 ; 
}