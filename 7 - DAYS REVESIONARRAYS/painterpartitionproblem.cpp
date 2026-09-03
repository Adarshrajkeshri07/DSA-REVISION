#include<iostream>
#include<algorithm>
using namespace std ;
bool ispossible(int a[] , int size , int maxtime , int painters){
    int worker = 1 , time = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(time + a[i] <= maxtime){
            time += a[i] ; 
        }else {
            worker++ ; 
            time = a[i] ; 
        }
    }
    if(worker <= painters){
        return true ; 
    }else {
        return false ; 
    }
} 
int painterproblem(int a[] , int size , int painters){
    int st = 0 , end = 0 ,ans  = 0 ; 
    for(int i = 0 ; i < size ; i++){
        st = max(a[i] , st ) ; 
        end += a[i] ; 
    }
    while( st <= end){
        int mid = st + (end - st) / 2 ;
        if(ispossible(a,size,mid,painters)){
            ans = mid ; 
            end = mid - 1 ; 
        }else {
            st = mid + 1 ; 
        }
    }
    return ans ; 
}
int main(){
    int a[5] =  { 10, 20, 30, 40, 50 } ;
    int k = 2 ;
    int ans = painterproblem(a,5,k) ;
    cout << ans ; 
    return 0 ; 
}