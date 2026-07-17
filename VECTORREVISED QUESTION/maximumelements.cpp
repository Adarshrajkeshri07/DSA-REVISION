#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector <int> vec = {5,50,4,89,52} ;
    int maximun = vec[0] ; 
    for(int val :  vec) {
        if(val > maximun){
            maximun=val ;
        }
    }
    cout << maximun ;
    return 0 ; 


}