#include<iostream>
using namespace std  ; 
int main(){
    int a[6] = {1,3,7,9,5,2} ;
    int st = 1 , end = 4 ; 
    while(st <= end){
        int mid = st + (end - st)/2 ; 
        if(a[mid] > a[mid-1]&& a[mid] > a[mid+1]){
            cout << mid ; 
            return 0 ; 
        }else  
        if(a[mid-1] < a[mid]){
            st = mid + 1;
          
        }else
            end = mid - 1;
    } 
    return 0 ; 

}