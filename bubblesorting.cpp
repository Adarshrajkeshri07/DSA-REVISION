#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {5,7,9,3,5,1} ; 
    int n = 6  ;
    for(int i = 0 ; i < n-1  ; i++){
        bool is = false ; 
        for(int j = 0 ; j < n - i -1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]) ; 
                is  = true ; 
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
    return 0 ; 
}