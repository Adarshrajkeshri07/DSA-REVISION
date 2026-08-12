#include<iostream>
using namespace std ; 
void bestbuy(int a[] , int size) {
    int bestbuy = a[0] ; 
    int maxprofit = 0 ; 
    for(int i = 1 ; i < size ; i++){
        if(bestbuy <= a[i]){
            maxprofit = max(maxprofit , a[i] - bestbuy) ; 
        }
        bestbuy = min(bestbuy ,a[i]) ; 
    }
    cout << bestbuy << " " << maxprofit ;
}
int main(){
    int  a[5] = {4,5,7,2,8} ; 
    bestbuy(a , 5) ; 
    return 0 ; 


}