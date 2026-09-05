#include<iostream>
#include<string>
using namespace std ; 
int main(){
    string s ; 
    string part ;
     cout << " enter full strings : " ; 
     cin >> s ; 
     cout << " enter the part " ; 
    getline(cin ,part) ;   
    while (s.length() > 0 && s.find(part) < s.length())
    {
        int pos = s.find(part) ; 
        s.erase(pos , part.length()) ; 
    }
    cout << s ; 
    return 0 ; 
     
}