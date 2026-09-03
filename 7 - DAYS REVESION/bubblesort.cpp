#include<iostream>
#include<algorithm>
using namespace std ; 
void fn(int a[] , int size){
    for(int i = 0 ; i < size - 1 ; i++){
        bool match = false ; 
        for(int j = 0 ; j < size - 1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] ,a[j+1]);
                match = true ; 
            }
        }
        if(!match){
            return  ; 
        }
    }
 
    
}
int main(){
    int a[5] = {6,2,3,4,6} ; 
    int size = 5 ; 
    fn(a,size) ; 
    for(int i = 0  ; i < size ;i++){
            cout << a[i] ; 
    }
    return 0 ; 
  
}