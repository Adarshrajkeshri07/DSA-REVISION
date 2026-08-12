#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {4,3,1,0,4};
    int count = 0 ; 
 int ans = a[0];
for(int i = 0 ; i <  5 ; i++){
    if(count==0){
        ans = a[i] ;
    }
    if(ans==a[i]){
        count++;
    }
    else {
        count--;
    }
}
cout << ans ; 
return 
0 ;
    
}
//if condition is not given in the question  n/2 < count ;