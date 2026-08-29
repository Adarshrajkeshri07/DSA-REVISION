#include<iostream>
#include<utility>
using namespace std ; 
int main(){
    int a[5] = {1,2,5,4,7} ; 
    int n = 5 ; 
    int st = 0; 
    int end = n-1 ; 
    while(st <= end){
        swap(a[st], a[end]) ; 
        st++ ; 
        end-- ; 
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " " ; 
    }
    return  0 ; 
}