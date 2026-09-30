#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ; 
void permute(vector<int> &a , vector<vector<int>> &ans , int idx){
    int n = a.size() ;
    if(idx == n){
        ans.push_back(a) ; 
        return ; 
    }
    for(int i = idx  ; i < n ; i++){
        swap(a[i], a[idx]);
        permute(a , ans ,idx + 1) ; 
        swap(a[i], a[idx]);
    }
}
int main(){
    vector<int> a = {1,2,4} ; 
    vector<vector<int>> ans ; 
     permute(a , ans , 0) ;
     for(auto x : ans){
        cout << "[" ;
        for(int i : x){

            cout << i ; 
        }
        cout << "]" ;
     } 
     return 0 ; 


}