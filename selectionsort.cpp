#include<iostream>
#include<vector>
using namespace std ;
void sorting(vector<int> &a){
    int n = a.size() ; 
    for(int i = 0 ; i < n - 1 ; i++){
        int smallest = i ; 
        for(int j = i + 1 ; j < n  ; j++){
            if(a[smallest] > a[j]){
                smallest = j ; 
            }
        }
        swap(a[smallest] , a[i]) ; 
    }
   
} 
int main(){
    vector<int> a = {9,5,7,3,1,6,8} ; 
    sorting(a) ;
    for (auto i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0 ; 
}