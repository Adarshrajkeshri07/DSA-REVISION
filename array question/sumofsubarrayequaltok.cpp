#include<iostream>
#include<unordered_map>
using namespace std ; 
int main(){
    int a[5] = {1,1,1,2,-2} ; 
    int n = 5 , vote = 0  ; 
    int k ; 
    k = 2 ; 
    int ps[5] ; 
     ps[0] = a[0] ; 
     for(int i = 1 ; i < n ; i++){
        ps[i] = ps[i-1] + a[i] ; 
     } 
     unordered_map<int , int >  m ; 
     m[0] = 1 ; 
     for(int i = 0 ; i < n ; i++){
        int val = ps[i] - k ; 
        if(m.find(val) != m.end()){
            vote += m[val] ; 
        }
        m[ps[i]]++ ; 
     }
     cout << vote ; 
     return 0 ; 
}