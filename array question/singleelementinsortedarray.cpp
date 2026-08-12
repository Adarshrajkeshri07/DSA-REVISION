#include<iostream>
using namespace std ; 
int main(){
    int a[9] = {1,1,2,3,3,4,4,8,8};
    int n = 9 ; 
    int st = 0 , end = 8 ; 
    if(n==1){
        cout << a[0] ;
        return 0 ; 
    }
    if(a[st]!=a[st+1]){
        cout <<a[st] ; 
        return 0 ; 
    }else if(a[end]!=a[end-1]){
        cout <<a[end] ;
        return 0 ; 
    }
    while(st <= end){
        int mid = st + (end - st ) / 2 ; 
        if(a[mid]!=a[mid-1]&&a[mid]!=a[mid+1]){
            cout << a[mid] ; 
            return 0 ; 
        }
        if(mid % 2 == 0){
            if(a[mid]==a[mid-1]){
                end = mid - 1 ; 
            }else{
                st = mid + 1 ; 
            }
        }else if(a[mid-1]==a[mid]){
            st  = mid + 1 ; 
        }else{
            end = mid - 1 ; 
        }
    }
    cout << "invalid" ; 

    return 0 ; 

}