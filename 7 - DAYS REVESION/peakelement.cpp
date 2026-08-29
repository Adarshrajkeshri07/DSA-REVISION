#include<iostream>
using namespace std ; 
int peak(int a[] , int size) {
    int st = 1 , end = size - 2  ;
    if (size == 1)
    {
        return a[0] ;
    }
    else if(a[0] > a[1]){
        return a[0] ; 
    }else if(a[size - 1] > a[size - 2]){
        return a[size - 1] ; 
    }
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid] > a[mid + 1] && a[mid] > a[mid - 1]){
            return a[mid] ; 

        }
        else if(a[mid] > a[mid - 1]){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
    }
    return - 1;
    
}
int main(){
    int a[7] = {2,3,5,8,3,2,1} ; 
    int ans = peak(a,7) ; 
    cout << ans ; 
}