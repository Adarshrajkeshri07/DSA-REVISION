// #include<iostream>
// using namespace std ; 
// int main(){
//     int a[8] = {1,0,2,0,1,5,3,7} ;
//     int n = 8 ; 
    
//     int st = 0 , end = 7 ; 
//     while(st <= end){
//         if(a[st] == 0){
//             swap(a[st] ,a[end]) ; 
//             end-- ;
//         }else {
//             st++ ; 
//         }
//     }
//     for(int i = 0 ; i< n ; i++){
//         cout << a[i] <<" "; 
//     }
//     return 0 ; 
// }

#include<iostream>
using namespace std ; 
int main(){
        int a[8] = {1,0,2,0,1,5,3,7} ;
        int n = 8 ;
        int st = 0 ; 
        for(int i = 0 ; i < n ; i++){
            if(a[i] != 0 ){
                swap(a[st] ,a[i]) ;
                st++;
            }
        }
        for(int i = 0 ; i < n  ; i++){
            cout << a[i] << " ";
        }
}