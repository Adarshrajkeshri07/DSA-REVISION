#include<iostream>
#include<climits>
#include<algorithm>
using namespace std ; 
int main(){
    int a[5] = {1,5,7,6,7};
    int largest = INT_MIN;
    int slargest = INT_MIN;
    for(int i = 0 ; i < 5 ; i++){
        if(largest <  a[i]){
            slargest = largest ; 
            largest = a[i] ; 
        }
        else 
         
        if(a[i] >  slargest && a[i] < largest){}
        slargest = a[i] ; 
    }
    cout<< slargest ; 
}
