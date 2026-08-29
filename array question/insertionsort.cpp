#include<iostream>
using namespace std ; 
int main(){
    int a[6] = {9,7,5,8,9,2} ; 
    int n = 6 ; 
    for(int i = 1 ; i < n ; i++){
        int curr = a[i] ; 
        int pre =  i - 1 ; 
        while(pre >= 0 && a[pre] < curr){
            a[pre+1] = a[pre] ; 
            pre-- ; 
        }
        a[pre+1] = curr ; 
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i]
 ;     }
}