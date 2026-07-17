#include<iostream>
using namespace std ; 
int main(){
    int a[ 5] ; 
    cout << " enter the value of element : " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin >> a[i] ; 
    } 
    int maximum = a[0] ; 
    for(int i = 0 ; i < 5 ; i++){
        if(maximum < a[i]) {
             maximum = a[i] ; 
        }
    } 
    cout << " the maximum element is : " <<  maximum  ; 
    return 0 ; 
}