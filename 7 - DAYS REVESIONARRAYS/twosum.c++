#include<iostream>
using namespace std ; 
int twosum(int a[] , int size , int target){
    int st = 0 , end = size - 1 ; 
    while(st < end){
        int sum = a[st] + a[end] ; 
        if(sum == target){
            cout << "first element index  : " << st << "  value is " << a[st]  << endl ; 
            cout << "last element index   :  " << end << "  value is " << a[end] ; 
            return 0 ; 
        }else if(sum > target){
            st++;
        }else 
        end-- ; 
    }
    return -1 ; 
}
int main(){
    int a[20] = { 12, 5, 8, 21, 3, 17, 9, 14, 6, 25, 11, 4, 19, 7, 31, 2, 16, 10, 23, 15} ;
    int target = 34 ;
    twosum(a,20,target) ; 
    return 0 ; 
}