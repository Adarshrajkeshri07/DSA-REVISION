#include<iostream>
using namespace std ; 
int mat(int a[] ,int size){
    int one = 0 ,two = 0 , zero = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(a[i]==0){
            zero++;
        }else  
        if(a[i]==1){
            one++ ;
        }else {
            two++;
        }
        int index = 0 ; 
        for(int i = 0 ; i < zero ; i++){
            a[index++] = 0 ;  
        }
        for (int i = 0; i < one; i++)
        {
            a[index++] = 1;
        }
        for (int i = 0; i < two; i++)
        {
            a[index++] = 2;
        }
    }
    for(int i = 0 ; i < size ; i++){
        cout <<a[i] ; 
    }
    return 0 ; 
}
int main(){
    int a[5] = {2,0,1,0,2} ; 
    mat(a ,5) ;
    return 0 ; 
}