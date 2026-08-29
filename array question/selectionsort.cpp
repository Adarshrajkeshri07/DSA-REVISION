#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {5,2,3,6,4} ; 
    int n = 5 ; 
    for(int i = 0 ; i < n-1  ; i++){
        int smallest = i ; 
        for(int j = i+1 ; j < n  ; j++){
            if (a[j] < a[smallest])
            {
                smallest = j ; 
            }
          
        }
        swap(a[i], a[smallest]);
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
}