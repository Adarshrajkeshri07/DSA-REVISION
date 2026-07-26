#include<iostream>
using namespace std; 
int main(){
    int a[7] = {2,4,5,6,4,8,4};
    int ans = 0 ; 
    int freq =  0 ;
    for(int i = 0 ; i< 7 ; i++){
        if(freq == 0){
            ans = a[i] ;
        }
        if(ans == a[i]){
            freq++;
        }
        else {
            freq--;
        }
    }
    cout << ans ; 
    return 0 ; 
}