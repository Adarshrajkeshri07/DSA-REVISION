#include<iostream>
#include<unordered_map>
using namespace std ; 
int main(){
    int a[5] = {1,2,3,-1,-2} ; 
    int n = 5 ; 
    int k = 3 ; 
    int ps[n] ; 
    int vote = 0 , val , sum ;
    ps[0] = a[0] ; 
    for(int i = 1 ; i < n ; i++){
        ps[i] = ps[i-1] + a[i] ; 
    }
    unordered_map<int , int> m ; 
    m[0] = 1 ; 
    for(int i = 0 ; i < n ; i++){
        val = ps[i] - k ; 
        if(m.find(val) != m.end()) {
            vote += m[val] ; 
        }
        m[ps[i]]++ ; 
    
    }
    cout << vote ; 
    return 0 ; 

}