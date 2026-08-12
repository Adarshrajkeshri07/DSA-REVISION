#include<iostream>
#include<climits>
using namespace std ; 
int maxprofit(int a[] , int size){
    int bestbuy = a[0];
    int maxprofit = 0 ; 
    for(int i = 1 ; i < size ; i++){
        if(bestbuy <= a[i]){
            maxprofit = max(maxprofit , a[i] - bestbuy );
        }
        bestbuy = min(bestbuy , a[i]) ; 
    }
    return maxprofit ; 
}
int main(){
     int a[5] = {7,1,2,5,4} ; 
     int size = 5 ; 
     int ans =  maxprofit(a,size) ; 
     cout << ans ; 
     return 0 ; 

}