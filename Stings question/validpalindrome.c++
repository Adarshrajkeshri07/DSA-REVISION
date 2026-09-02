#include<iostream>
#include<string>
using namespace std ;
bool str(string s)
{
    int st = 0, end = s.length() - 1;
    while (st <= end)
    {
        if (!isalpha(s[st]))
        {
            st++;
            continue;
        }
        if (!isalpha(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[st]) != tolower(s[end]))
        {
            return false;
        }
        st++, end--;
    }
    return true;
}
int main(){
    string s ; 
    cin >> s ; 
     bool ans = str(s) ;
     if(ans){
        cout << "valid" ; 
     }else {
        cout << " invalid" ; 
     }
     return 0 ; 
}