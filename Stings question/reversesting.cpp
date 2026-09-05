#include<iostream>
#include<string>
#include<algorithm>
using namespace std ; 
int main(){
 string s ; 
 cout << " enter the strings : -" ; 
getline(cin ,s);
int st = 0 , end = s.length() - 1 ; 
while(st < end){
    swap(s[st] , s[end]) ; 
    st++ , end-- ; 
}
cout << s ; 
return 0 ; 
}