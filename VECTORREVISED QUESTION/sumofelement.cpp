#include<iostream>
#include<vector>
using namespace std ; 
int main(){
    vector<int> vec(5) ;
    int sum = 0;
    cout << " enter the value of the elements" ; 
    for(int &val : vec){
        cin >> val ; 
    } 
    
    for(int main : vec){
        sum+=main; 
    }
    cout << sum ; 
return 0 ; 
}