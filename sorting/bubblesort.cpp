#include<iostream>
using namespace std  ; 
void sorting(int a[] , int n){
    for(int i = 0 ; i < n - 1 ; i++){
        for(int j = 0 ; j < n - i - 1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]) ; 
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
}
int main(){
 int a[5] = {5,6,2,9,1} ; 
 int n = 5 ; 
 sorting(a , n)  ; 
 return 0  ; 
}