#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector <int> vec = {10,30,50,40,20,80} ; 
    for(int val : vec){
        cout << val << endl;
    }
    return 0 ; 
}