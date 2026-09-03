#include<iostream>
#include<algorithm>
using namespace std ; 
int maxprofit(int a[] , int size){
    int bestbuy = a[0] ; 
    int maxigain = 0 ; 
    for(int i = 1 ; i < size ; i++){
        if(bestbuy <= a[i]){
            maxigain = max(maxigain , a[i] - bestbuy) ; 
        }
        bestbuy = min(bestbuy , a[i]) ; 
    }
    return maxigain ; 
}
int main(){
    int a[6] = {7,1,5,6,3 ,2} ; 
    int n = 6 ;

    cout << maxprofit(a, n);
    return 0 ; 

}