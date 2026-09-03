#include<iostream>
using namespace std ; 
int moores(int a[] , int size){
    int ans = a[0] ; 
    int count = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(count == 0 ){
            ans = a[i] ; 
          count = 1 ; 
           
           
        }
        else if (a[i] == ans)
        {
            count++ ;
        }
        else
        {
            count-- ;
        }
    }
    count = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(ans == a[i]){
            count++;
        }
    }
    if(count > (size / 2)){
        return ans ; 
    }
    return -1 ; 
}
int main(){
    int a[5] = {3,2,1,2,2} ; 
    int size = 5 ; 
    int ans = moores(a,size) ; 
    cout << ans ; 
    return 0 ; 
}