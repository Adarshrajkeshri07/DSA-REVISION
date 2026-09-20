#include<iostream>
#include<unordered_map>
using namespace std ; 
int main(){
int a[5] = {2,7,9,11,13} ; 
int n = 5 ; 
int target = 20 ; 
unordered_map<int , int > m ; 
for(int i = 0 ; i < n ; i++){
    int first = a[i] ; 
    int sec = target - a[i] ; 
    if(m.find(sec) != m.end()) {
        cout << sec  << " " << a[i]; 
        return 0 ;     
    }
    m[first] = i ; 

}
return 0 ; 
}