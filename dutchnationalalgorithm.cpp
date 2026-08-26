#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {2,0,1,0,1};
    int n = 5 ; 
    int st = 0 , mid = 0 , end = n-1 ;
    while(mid <= end){
        if(a[mid] == 0){
            swap(a[st] ,a[mid]) ;
            st++ , mid++ ;
        }
        else if(a[mid] == 1){
            mid++ ;
        }else {
            swap(a[mid] , a[end]) ; 
            end--; 
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ;
    }
    return 0 ; 
}