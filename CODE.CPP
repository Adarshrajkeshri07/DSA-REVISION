#include<utility>
#include<iostream>
using namespace std ; 
int main(){
    int n[5] = {5,2,4,3,6} ;
    int  a = 5 ; 
   for(int i = 0 ; i < a; i++){
       int smallest = i ; 
       for(int j = i + 1 ; j < a ; j++){
        if(n[j] > n[smallest]){
            smallest = j;
        }
         
        swap(n[i] , n[smallest] );
       
   }
}
   for(int i = 0 ; i < a ; i++){
    cout << n[i] ; 
   }

    
}