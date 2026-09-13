#include<iostream>
using namespace std ; 
int main(){
    int a[5][5] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55}};
        int rows = 5 , cols = 5 ; 
        int r  = 0 , c = cols - 1 ; 
        int target = 44 ;  
        while(r < rows && c >= 0 ){
            int mid = a[r][c] ; 
            if(target == mid){
                cout << r << " " << c << endl ; 
                cout << mid ; 
                return 0 ; 
            }
            if(target > mid){
                r++ ; 
            }else {
                c-- ; 
            }
        }
        return 0 ; 
}