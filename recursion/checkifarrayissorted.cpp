#include<iostream>
using namespace std ; 
bool issort(int arr[] ,int sz){
    if(sz == 0 || sz == 1){
        return true ; 
    }
    return arr[sz - 1] > arr[sz - 2] && issort(arr, sz - 1) ; 
}
int main(){
    int arr[5] = {1,2,3,4,5} ; 
    int n = 5 ; 
     bool ans = issort(arr , n) ; 
     if(ans){
        cout << " sorted array " ; 
     }
     else {
        cout << "unsorted array" ; 
     }
}