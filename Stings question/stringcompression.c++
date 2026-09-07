#include<iostream>
#include<algorithm>
#include<string>
using namespace std ; 
int main(){
    char ch[15] = {'a','d','a','r','s','h' ,'r' ,'a','j','k','e','s','h','r','i'} ;
    int n = 15;
    sort(ch , ch + n) ;
   
    int idx = 0 ; 
    for(int i = 0 ; i < n ; i++){
        int c = ch[i] ; 
        int freq = 0 ; 
        while(i < n && c == ch[i]){
            i++ , freq++ ; 
        }
        if(freq == 1){
            ch[idx++] = c ; 
        }else {
            ch[idx++] = c ;
            string str = to_string(freq) ; 
            for(char val : str){
                ch[idx++] = val ; 
            }
        }
        i-- ;
    }
    for(int i = 0 ; i < idx ; i++){
        cout << ch[i] << " " ; 
    }
    return 0 ; 
}