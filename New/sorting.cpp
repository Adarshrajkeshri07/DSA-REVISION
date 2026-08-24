#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int  a[6] = {4,1,5,4,9,3} ; 
    int n = 6 ; 
    for(int i = 0 ; i < n -1 ; i++){
        
        for(int j = 0 ;  j < n - i - 1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] ,a[j+1]);
            }
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] ; 
    }
    return 0 ; 
}