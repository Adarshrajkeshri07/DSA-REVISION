#include<iostream>
#include<algorithm>
using namespace std ;
int find(int a[] , int size,int target){
int st = 0 , end = size - 1 ; 
while(st <= end){
    int mid = st + (end - st) / 2 ; 
    if(a[mid] == target){
        return mid ; 
    }
    else if(a[st] <= a[mid]){
        if (a[st]  <= target && target < a[mid])
        {
            end = mid - 1 ;
        }
        else
        {
            st = mid + 1 ;
        }
    }
    else {
        st = mid + 1 ; 
    }

}
return -1;

}

int main(){
int a[7] = {4,5,6,7,0,1,2} ;
int n = 7 ; 
int target = 0 ; 
 int ans = find(a,n,target) ; 
 cout << ans ; 
}