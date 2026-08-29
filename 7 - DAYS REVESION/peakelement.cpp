#include<iostream>
#include<algorithm>
using namespace std;
int peak(int a[] , int size){
    int st = 1 ,  end = size - 2 ; 
    while(st <= end){
        int mid = st + (end - st) / 2 ; 
        if(a[mid] > a[mid - 1] && a[mid] > a[mid + 1]){
            return a[mid] ; 
        }else if(a[mid] > a[mid - 1] ){
            st = mid + 1 ; 
        }else {
            end = mid - 1 ; 
        }
    }
return - 1; 
}
int main(){
    int a[4] = {1,2,3,1} ; 
    int size = 4 ; 
    int ans = peak(a, size) ; 
    cout << ans ; 
    return 0 ; 
}