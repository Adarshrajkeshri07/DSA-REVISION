// #include<iostream>
// using namespace std ;
// int main(){
//     int arr[5]= {2,5,4,7,8} ; 
//     int size = 5 ; 
//     int ans = 1 ; 
//     int prefix[size]  ; 
//      prefix[0] = 1 ;
//      int suffix[size] ;
//      suffix[size-1] = 1; 
//       for(int i = 1 ; i <  size ; i++){
//         prefix[i] = prefix[i-1]*arr[i-1];
//       }   
//       for(int i = size - 2 ; i >= 0 ; i--){
//         suffix[i] = suffix[i+1]*arr[i+1] ; 
//       }
//       for(int i = 0 ; i < size ; i++){
//         ans = prefix[i] * suffix[i] ; 
//         cout << ans << " " ; 
//       }
//       return 0 ; 


// }
#include<iostream>
using namespace std ; 
int main(){
  int arr[5] = {2,4,5,4,7} ; 
  int size = 5 ; 
  int ans[size] ; 
  ans[0]=1 ; 
   int prefix = 1 ;
   int sufix = 1 ;
   for(int i = 1 ; i < size ; i++){
    ans[i] = ans[i-1]*arr[i-1] ; 
   }
   for(int i = size -1 ; i >= 0 ; i--){
        ans[i]*=sufix ; 
        sufix*=arr[i] ; 

  
   } 
   for(int i = 0 ; i < size ; i++){
    cout << ans[i] << " ";
   }
   return 0 ;
  
}