#include<iostream>
#include<algorithm>
using namespace std ; 
int main(){
    int a[5] = {1,0,2,0,9} ; 
    int size = 5 ; 
    int index = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(a[i] != 0){
            swap(a[i],a[index]);
            index++;
        }
  
    }
    for(int i = 0 ; i < size ; i++){
        cout <<a[i] ;
    }
    return 0 ; 
}