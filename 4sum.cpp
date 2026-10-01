#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
int main(){
   vector<int> a = {1,2,3,-1,-2} ; 
   sort(a.begin() ,a.end()) ;
    int n = a.size() ; 
    vector<vector<int>> ans ; 
    for(int i = 0 ; i < n ; i++){
        if(i > 0  && a[i] == a[i-1]) continue;
        for(int j = i + 1 ; j < n ; j++){
            if(j > i +1  && a[j] == a[j-1])continue; ; 
            int p = j + 1  , q  = n -1 ; 
            while( p < q){
                int sum = a[i] + a[j] + a[p] + a[q] ; 
                if(sum > 0){
                    q-- ; 
                }else if(sum < 0 ){
                    p++ ; 
                }
                else {
                    ans.push_back({a[i] , a[j] , a[p] , a[q]}) ; 
                    while( p < q && a[p] == a[p+1])p++;
                    while( p < q && a[q] == a[q-1])q--;
                    p++ , q-- ; 
                }
            }
        }
    }
    for(auto x :  ans){
        cout << "{" ; 
        
        for(int i : x){
            
            cout << i ; 
        }
        cout << "}" ; 
    }
    return 0 ; 
}