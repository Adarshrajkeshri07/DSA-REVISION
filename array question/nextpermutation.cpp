#include<iostream>
#include<algorithm>
using namespace std  ; 
int main(){
    int a[6] = {1,2,3,6,5,4} ; 
    int sz = 6 , n = sz- 1 ; 
    int piv = -1 ; 
    for(int i = n ; i > 0 ; i--){
        if(a[i-1] < a[i]){
            piv = i - 1 ; 
            break;
        }
    }
    if(piv == -1){
        reverse(a , a + n) ; 
        return 0 ; 
    }else {

    for(int i =  n  ; i > piv ; i--){
        if(a[i] > a[piv]){
            swap(a[i] , a[piv]) ; 
            break;
        }
    }
}
   reverse(a + piv + 1  , a + sz) ; 
    for(int i = 0 ; i < sz ; i++){
        cout << a[i] ; 
    }
    return 0 ; 
}