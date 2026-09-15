#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std ; 
int main(){
    vector<int> a = {2,5,7,1,5,9} ; 
    int n = a.size() ; 
    int target  ; 
    cin >> target ; 
    unordered_map<int , int > m ; 
    pair<int , int >  ans ; 
    for(int i = 0 ; i < n ; i++){
        int first = a[i] ; 
        int sec = target - a[i] ; 
        if(m.find(sec) != m.end()){
            ans = {i,m[sec]} ;
            cout << ans.first << " " << ans.second ; 
        }
        m[first] = i ; 
    }
    return 0 ; 
}