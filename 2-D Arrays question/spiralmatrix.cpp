#include<iostream>
using namespace std ; 
int main(){
    int a[5][5] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55}};
        int m = 5 , n = 5 ;
        int srow = 0 , scols = 0 , erow = m - 1 , ecols = n - 1 ; 
        while(srow <= erow && scols <= ecols){
            for(int i = scols ; i <= ecols ; i++){
                cout << a[srow][i] << " "; 
            }
            for (int i = srow + 1 ; i <= erow; i++)
            {
                cout << a[i][ecols] << " ";
            }
            for (int i = ecols - 1 ; i >= scols; i--)
            {
                if(srow == erow)break;
                cout << a[erow][i] << " ";
            }
            for (int i = erow - 1; i >= srow + 1; i--)
            {
                if (scols == ecols)
                    break;
                cout << a[i][scols] << " ";
            }
             srow++, scols++, erow--, ecols--;
        }
        return 0 ; 
}