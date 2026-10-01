#include<iostream>
#include<vector>
#include<string>
using namespace std ; 
int main(){
    string s = "my name is adarsh raj keshri" ; 
    string current ; 
    vector<string> word ; 
    for(int  i = 0 ; i < s.size() ; i++){
        if(s[i] != ' ' ){
            current += s[i] ; 
        }else {
            word.push_back(current) ; 
            current = "" ; 
        }
    } word.push_back(current) ; 
    for(int i = word.size() - 1 ; i >= 0 ; i--){
        cout << word[i] << " " ; 
        
    }
    
    return 0 ; 
}