#include<iostream>
using namespace std ; 
int main(){
    int ld  ; 
    int pow = 1 ; 
    int ans = 0 ; 
    int rev = 0 ;
    int n ; 
    cout << " enter the value of n : " ; 
    cin >> n ; 
    while(n!=0){
    //     ld = n  % 2 ; 
    //    ans += ld * pow ; 
    //    pow *= 10 ; 
    //     n /= 2 ;
    ld = n % 10 ; 
    ans += ld * pow ; 
    pow *= 2 ; 
    n /= 10 ; 

    

    }
    cout << ans ; 
}