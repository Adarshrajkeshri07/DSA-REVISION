#include<iostream>

using namespace std ; 
int single(int a[] , int size ){
    int st = 0 , end = size - 1 ;
    if(size == 1){
        return a[0] ; 
    } 
if(a[st] != a[st + 1]) return a[st] ;
    if(a[end] != a[end - 1])return a[end] ; 
    while(st <=  end){
        int mid = st + (end - st) / 2 ; 
     if(a[mid] != a[mid - 1] && a[mid] != a[mid+1]){
        return a[mid] ; 
     }
     if(mid % 2 == 0 ){
        if(a[mid] == a[mid-1]){
            end = mid - 1 ; 
        }else {
            st = mid + 1 ;
        }
     }
     else {
        if(a[mid] == a[mid - 1]){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ;
        }
     }
    }
    return -1 ; 
}

int main(){
    int a[9] = { 1, 1, 2, 3, 3, 4, 4, 8, 8 };
    int n = 9 ;
     int ans = single(a,n); 
    cout << ans  ;
    return 0 ; 
}