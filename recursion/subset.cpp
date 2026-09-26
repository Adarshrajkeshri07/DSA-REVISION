#include<iostream>
#include<vector>
using namespace std ; 
void subset(vector<int> &a , vector<int>& ans , int i){
    if(i == a.size()){
        for(auto x : ans){
            cout << x ; 
        }
        cout << endl ; 
       return ; 
    }
    ans.push_back(a[i]) ;
    subset(a , ans , i + 1) ; 
    ans.pop_back() ;
    subset(a, ans, i + 1);
}
int main(){
    vector<int> a = {1,2,3,4,5} ; 
    vector<int> ans ;
    subset(a , ans , 0) ;  
    return 0 ; 
}