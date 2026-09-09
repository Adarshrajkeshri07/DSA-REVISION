#include<iostream>
#include<string>
using namespace std ; 
bool valid(string s){
    int st = 0 , end = s.length() - 1 ; 
    while(st <= end){
        if(!isalpha(s[st])){
            st++ ; 
            continue;
        }
        if (!isalpha(s[end]))
        {
            end-- ; 
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false ; 
        }
        st++ , end-- ; 
    }
    return true ; 
}
int main(){
string s ; 
getline(cin , s) ; 
if(valid(s)){
    cout << " palindrome " ; 
}else {
    cout << " not valid palindrome " ; 
}

}
