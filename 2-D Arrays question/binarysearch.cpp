#include<iostream>
#include<vector>
using namespace std ;
bool find(vector<int> &a ,int  target){
    int n = a.size() ; 
    int st = 0 , end = n - 1 ; 
    while( st <=  end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid] == target){
            return true ; 
        }else if(a[mid] < target){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
    }
    return false ; 
} 
int main(){
    int rows  , cols ; 
    cout << "enter the value of rows and cols" ; 
    cin >> rows >> cols ; 
    vector<vector<int>> a (rows,vector<int>(cols)) ;
    for(int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < cols ; j++){
            cin >> a[i][j] ; 
        }
    }
    int target = 23 ; 
   int strow = 0 , endrow = rows - 1 ; 
   while( strow <= endrow){
    int midrow = strow + (endrow - strow) / 2 ;
    if (a[midrow][0] <= target && target <= a[midrow][cols - 1])
    {
        if(find(a[midrow] , target)){
            cout << " valid target" << endl ;  
        }else {
            cout << "invalid target" ; 
        }
        return 0 ; 
    }
    else if(a[midrow][0] < target){
        strow = midrow + 1 ; 
    }else {
        endrow = midrow - 1 ; 
    }
   }
   return 0 ; 
}