#include<iostream>
#include<climits>
using namespace std ; 
int main(){
    int a[5] = {5,6,-7,4,1} ;
    int sum = 0;

    int maxsum = INT_MIN ;  
     for(int i = 0 ; i < 5 ; i++){
        
         sum += a[i];
         maxsum = max(maxsum, sum);
         if (sum < 0)
         {
             sum = 0;
         }
     } 
     cout << maxsum ; 
     return 0 ; 

}