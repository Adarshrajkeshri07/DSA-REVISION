#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 
void merge(int a[] , int m ,int b[] , int n){
    int i = m - 1 ; 
    int j = n - 1 ; 
    int index = m + n - 1 ; 
    while( i >= 0  && j >= 0){
        if(a[i] > b[j]){
            a[index] = a[i] ; 
            index-- , i-- ;
        }else {
            a[index] = b[j] ; 
            index-- , j-- ; 
        }
    }
    while (j >= 0 )
    {
        a[index]  = b[j] ;
        index-- , j--;
    }
    
}
int main(){
    int a[5] = {1,4} ;
    int b[3] = {2,3,6} ; 
    merge(a,2,b,3) ;
    for(int i = 0 ; i < 5 ; i++){
        cout << a[i] ;
    }
    return 0 ; 

}