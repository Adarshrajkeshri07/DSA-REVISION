//binary search is only for sorted array...........
#include<iostream>
#include<algorithm>
using namespace std ; 
int binarysearch(int a[],int size ,int target){
    sort(a , a + size);
    int st = 0 , end = size - 1 , mid ; 
    while(st <=  end){
        mid = st + (end-st)/2 ; 
        if(a[mid]>target){
            end = mid - 1 ; 
        }else 
        if(a[mid]<target){
            st = mid + 1 ; 
        }else {
            return mid ;
        }
    }
    return -1 ; 
}
int main(){
    int a[6] = {2,45,5,7,3,8} ; 
int ans =     binarysearch(a,6,45);
if(ans!=-1){
    cout << ans << " the value is = " << a[ans];
}else 
cout << " not found";
cout <<endl ; 
}