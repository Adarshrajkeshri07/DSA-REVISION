#include<iostream>
using namespace std ; 
int main(){
    int a[5] = {2,5,6,9,4} ; 
    for(int i = 0 ; i < 5 ; i++){
        for(int k = 0 ; k < 5 ; k++){
            for(int j = i ; j <= k ; j++){
                cout << a[j] ; 
            }
            cout << " " ; 
        }
        cout << endl ; 
    }
    return 0 ; 
}