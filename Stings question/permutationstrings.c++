#include<iostream>
#include<string>
using namespace std ; 
bool fq(int a[] , int b[]){
    for(int i = 0 ; i < 26 ; i++){
        if(a[i] != b[i]){
            return false ; 
        }
    }
    return true ; 
}
bool check(string full ,string part){
    int freq[26] = {0} ; 
      for(int i = 0 ; i < part.length() ; i++){
            freq[part[i] - 'a']++;
      }
      for(int i = 0 ; i < full.length() ; i++){
        int warr[26] = {0} ; 
        int windowidx = 0 , idx = i ; 
        while(windowidx < part.length() && idx < full.length()){
            warr[full[idx] - 'a']++;
            windowidx++, idx++;
        }
        if(fq(warr,freq)){
            return  true; 
        }
      }
      return false ; 
}
int main(){
    string full  = "dbnfgsngvnmvxckv" ; 
    string part = "gvn" ;

    if (check(full, part)){
        cout << " hello right" ; 
    }
    else {
        cout << "invalid" ; 
    }
}