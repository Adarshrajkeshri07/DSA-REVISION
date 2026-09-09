#include<iostream>
#include<string>
using namespace std ; 
void reversestring(string s){
    int st = 0 , end = s.length() - 1 ; 
    while(st < end){
        swap(s[st],s[end]) ; 
        st++ , end-- ; 
    }
    for(int i = 0 ; i < s.length() ; i++){
        cout << s[i] ; 
    }
  
}
int main(){
    string s = "adarshrajkeshri" ; 
    reversestring(s) ; 
    return 0 ; 
}