#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] = {1,2,3,4,5};
    int maxsum  = INT_MIN ;
    for(int i = 0 ; i < 5 ; i++){
        int sum = 0 ; 
        for(int j = i ; j < 5 ; j++){
            sum+=a[j] ; 
            maxsum = max(sum , maxsum) ; 
        }
    }
    cout << maxsum ; 
    return 0 ; 
} 