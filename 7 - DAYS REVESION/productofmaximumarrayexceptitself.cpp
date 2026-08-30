#include<iostream>
#include<algorithm>
#include<climits>
using namespace std ;
int product(int a[] , int size){
    int suffix = 1 ; 
    int answer = INT_MIN ;
    int ans[size] ;
    ans[0] = 1 ; 
    for(int i = 1 ; i < size   ; i++){
        ans[i] = ans[i-1] * a[i-1] ; 
    }
    for(int i = size - 1 ; i >= 0 ; i--){
        ans[i] *= suffix ; 
        suffix *= a[i] ;
        answer = max(ans[i] , answer) ; 
    }

  return answer ; 
}
int main(){
    int a[6] = {2,5,3,1,4,7} ; 
int ans =     product(a , 6) ; 
cout << ans ; 
return 0 ; 
}  