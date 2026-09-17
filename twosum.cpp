#include<iostream>
#include<unordered_map>
using namespace std ; 
int main(){
    int a[5] = {1,2,1,5,4} ; 
    int n = 5 ; 
    int target = 9 ; 
    unordered_map<int , int > s ; 
    for(int i = 0 ; i < n ; i++){
        int first = a[i] ; 
        int sec =  target -  first ; 
        if(s.find(sec) != s.end()){
            cout << sec << "  and  " << a[i] ; 
            return 0 ; 
        }
        s[first] = a[i] ; 
    }
    return 0 ; 
}