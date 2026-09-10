#include<iostream>
using namespace std ;
int main(){
    int matrix[4][4] = {{1,2,3,4},{4,5,6,7},{7,8,9,10},{10,11,12,11}};
    int n = 4 ; 
    int digonalsum = 0 ; 
    for(int i = 0 ; i < n ; i++){
        digonalsum += matrix[i][i] ; 
        if(i != n - 1 - i){
            digonalsum += matrix[i][n-1-i] ; 
        }
    }
    cout << " the digonal sum of this matrix is " << digonalsum  ; 
    return 0  ;
}