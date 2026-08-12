#include<iostream>
#include<algorithm>
using namespace std ; 
void twosum(int a[] , int size ,int target){
    int st = 0 , end = size -1 ; 
    int sum = 0 ; 
    sort(a , a + size);
    while(st <  end ){
        sum = a[st] + a[end] ; 
        if(sum > target){
            end--;
        }else 
        if(sum < target){
            st++;
        }
     else {
        cout << a[st] << " the element is this " << " the element index is = " << st  << endl ;
        cout << a[end] << " the element is this " << " the element index is = " << end ;
        return ; 
    } 
  
}
cout << " not found ";
}
int main(){
int a[5] = {5,7,8,2,4} ; 
twosum(a,5,77);
return 0 ;
}