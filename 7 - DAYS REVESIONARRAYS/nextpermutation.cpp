#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int piv  = -1 ;  ;
    int a[7] = {1, 4, 7, 6, 5, 3, 2}; 
    int n = 7 ; 
    int small = 0 ; 
    for(int i = 5 ; i >= 0 ; i--){
        if(a[i] < a[i+1]){
            piv = i;
            break;
        }
    }
    if(piv == -1){
        reverse(a , a+n) ; 
        return 0 ; 
    }
    for(int i = n - 1 ; i >= 0 ;i--){
        if (a[piv] < a[i])
        {
          swap(a[piv] , a[i]) ; 
          break;
        }
    }
    int i = piv + 1 ; 
    int j = n - 1 ; 
    while(i < j){
        swap(a[i],a[j]) ; 
        i++ , j-- ; 
    }
    for(int i = 0 ; i  < n ; i++){
        cout << a[i] << " " ; 
    }
    return 0 ; 
}