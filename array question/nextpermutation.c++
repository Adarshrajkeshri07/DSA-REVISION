#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int a[5]  = {2,4,0,5,4} ; 
    int piv = -1 ; 
    int n = 5 ; 
    for(int i = n - 2 ; i >= 0 ; i--){
            if(a[i] < a[i+1]){
                piv = i ; 
                break;
            }
    }
    if(piv == -1){
        reverse(a , a+n);
        return 0 ; 
    }
    for(int i = n - 1 ; i >= 0 ; i--){
        if(a[i] > a[piv]){
            swap(a[i],a[piv]) ;
            break;
        }
    }
    int i = piv + 1 ; 
    int j = n - 1 ; 
    while(i < j){
        swap(a[i],a[j]) ;
        i++ , j-- ;
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ;
    }
    return 0 ; 
}