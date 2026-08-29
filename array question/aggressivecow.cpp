#include<climits>
#include<algorithm>
#include <iostream>
using namespace std;
bool ispossible(int a[] , int n , int m , int mid) ;
int main(){
    int a[5] = {1,5,2,4,8} ; 
    int n = 5 ; 
    sort (a , a + n) ; 
    int k = 3 ;
    int st = 1  , end = a[n - 1] - a[0] , ans = -1 ; 
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(ispossible(a,n,k,mid)){
                ans = mid ; 
                st = mid  + 1 ; 
        }else {
            end = mid - 1 ;
        }
    }
    cout << ans ; 
    return 0 ; 
}
bool ispossible(int a[], int n, int m, int mid){
    int cow = 1  , maxdi = a[0] ; 
    for(int i = 1 ; i < n ; i++ ){
        if(a[i] - maxdi >= mid){
            cow++ ; 
            maxdi = a[i] ; 
        }
    }
    if(cow >= m ){
        return true ; 
    }else {
        return false ; 
    }
}