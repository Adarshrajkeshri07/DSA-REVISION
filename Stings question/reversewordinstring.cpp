#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
string revers(string s){
    int n = s.length() ; 
    reverse(s.begin(),s.end()) ;
    string word ,ans ; 
    for(int i = 0 ; i < n ; i++){
        while (i < n && s[i] != ' ')
        {
            word += s[i] ; 
            i++ ; 
        }
        reverse(word.begin(),word.end());
        if(word.length() > 0 ){
            ans += " " + word ; 
        }
        word.clear() ; 
        
    }
    return ans.substr(1); 
} 

int main(){
string s ; 
cout << "enter the sentence : - " ; 
getline(cin , s) ; 
 string ans = revers(s) ; 
 cout << ans ; 
 return 0 ; 

}