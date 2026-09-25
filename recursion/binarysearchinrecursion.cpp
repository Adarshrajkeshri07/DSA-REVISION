#include<iostream>
using namespace std ; 
int binarySearch(int arr[] , int n , int st , int end ,int  target){
    if(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(arr[mid] == target ){
            return mid ; 
        }else if(arr[mid] >= target){
            return binarySearch(arr  , n , st, mid - 1 ,target) ; 
        }else {
            return binarySearch(arr, n, mid + 1, end, target);
        }
    }
    return -1 ; 
}
int main(){
    int arr[5] = {1,2,3,4,55} ; 
    int n = 5 ; 
    int ans = binarySearch(arr , n , 0 , n - 1 , 2) ; 
    cout << ans ; 
    return 0 ; 
}