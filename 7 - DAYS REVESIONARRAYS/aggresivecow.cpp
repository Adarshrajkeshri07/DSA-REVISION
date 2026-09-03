#include<iostream>
#include<algorithm>
using namespace std ; 
bool ispossible(int a[] , int size , int cow , int maxdistance){
    int c = 1 , ld = a[0] ; 
    for(int i = 1 ; i < size ;i++){
        if(a[i] - ld >= maxdistance){
      ld = a[i] ; 
      c++; 
        }
    }
    if(c >= cow){
        return true ;
    }else {
        return false ;
    }
}
int maxdis(int a[] , int size , int cows){
    int st = 1 , end = a[size - 1] - a[0] , ans ; 
    while (st <= end)
    {
        int mid = st + (end - st ) / 2 ; 
        if(ispossible(a,size,cows,mid)){
            ans = mid ; 
                st = mid + 1 ; 
        }
        else {
            end = mid - 1 ; 
        }
    }
    return ans  ; 
    
    
}
int main(){
    int a[5]  = {1,2,4,8,9} ; 
    int ans = maxdis(a,5,3) ; 
    cout << ans ; 
}