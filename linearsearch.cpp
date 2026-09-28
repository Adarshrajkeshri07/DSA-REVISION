#include<iostream>
using namespace std ; 
int main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ; 
    int row = 3 , cols = 3 , target = 8; 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < cols ; j++){
            if(a[i][j] == target){
                cout<< target ; 
                return 0 ; 
            }
        }
    }
    return -1 ; 
}