#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int  a[6] = {4,1,5,4,9,3} ; 
    int n = 6 ; 
    for(int i = 0 ; i < n  ; i++){
        int smallest = i ; 
        for(int j = i + 1 ;  j < n  ; j++){
        if(a[j] < a[smallest]){
            smallest = j ; 
        }
        }
        swap(a[i], a[smallest]);
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
    return 0 ; 
}