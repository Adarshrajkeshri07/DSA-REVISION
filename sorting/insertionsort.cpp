#include<iostream>
#include<vector>
using namespace std  ; 
void sorting(vector<int> &a){
    int n = a.size() ; 
    for(int i = 0 ; i < n ; i++){
        int curr = a[i] ; 
        int pre = i - 1 ; 
        while(pre >=0 && a[pre] > curr){
            a[pre+1] = a[pre] ; 
            pre-- ; 
        }
        a[pre+1] = curr ; 
    }
    for(int i = 0 ; i < n ; i++){
        cout << a[i] << " " ; 
    }
}
int main(){
    vector<int> a = {5,6,4,69,0,6} ; 
    sorting(a) ; 
    return 0 ; 
}