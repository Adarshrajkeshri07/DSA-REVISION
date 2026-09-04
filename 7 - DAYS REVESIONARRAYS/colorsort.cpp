#include<iostream>
using namespace std ; 
int main(){
    int a[7]  = {1,2,0,1,0,2,0}  ; 
    int n = 7 ; 
    int st = 0 , mid = 0 , end = n -1 ;
    while(mid <= end){
        if(a[mid] == 0 ){
            swap(a[st],a[mid] );
            mid++ , st++ ; 
        }
        else if(a[mid] == 1){
            mid++ ;
        }else if(a[mid] == 2){
            swap(a[mid] ,a[end] ) ; 
            end-- ; 
        }
    } 
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " " ; 

    }
    return 0 ; 
 
}