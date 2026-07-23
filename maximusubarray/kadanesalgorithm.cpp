#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] = {2,3,4,5,6};
    int currentsum = 0  , maxsum =  INT_MIN ; 
    for(int i = 0 ; i < 5 ; i++){
        currentsum+=a[i];
        maxsum = max(currentsum , maxsum) ; 
        if(currentsum < 0){
            currentsum = 0 ; 
        }
    }
    cout << maxsum ; 
    return 0 ; 
}