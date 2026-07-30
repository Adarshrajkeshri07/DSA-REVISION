#include<iostream>
#include<climits>
using namespace std ; 
int maxarea(int a[] , int size){
    int st = 0 , end = size - 1 ; 
    int maxarea = 0 ; 
    while(st < end ){
        int height = min(a[st] , a[end]) ; 
        int widht = end - st ; 
        int area = height * widht ; 
        maxarea = max(maxarea , area);
        if(a[st] < a[end]){
            st++ ; 
        }else
        end-- ; 
    }
    return maxarea ; 
}
int main(){
    int a[5] = {2,4,5,1,4} ; 
  int x =   maxarea(a,5);
  cout << x ; 
    return 0 ; 
}