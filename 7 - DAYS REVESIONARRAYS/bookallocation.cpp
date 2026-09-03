#include<iostream>
#include<algorithm>
using namespace std ; 
bool ispossible(int a[] , int size ,int m , int mid);
int books(int a[] ,int size,int m ){
    int st = 0 , end = 0 ,ans  ;
    for(int i = 0 ; i < size ; i++){
        st = max(st ,a[i]) ;
        end += a[i] ; 
    }
    while( st <=  end){
        int mid = st + (end - st) / 2 ; 
        if(ispossible(a,size,m,mid)){
            ans = mid ;
            end = mid - 1 ; 
        }else {
            st = mid + 1 ;
        }
    }
    return ans ; 
}

bool ispossible(int a[], int size, int m, int mid){
    int s = 1 , page = 0 ;
    for(int i = 0 ; i < size ;i++){
        if(page + a[i] <= mid){
           page += a[i] ; 
        }else {
            s++;
            page = a[i] ;
        }
    }
    if(s <= m){
        return true ;
    }
    else {
        return false ;
    }
} 
int main(){
    int a[5] = {10,20,30,40,50} ;
    int size = 5 ; 
    int ans = books(a , size , 2) ;
    cout << ans << " " ; 
    return 0 ; 
}