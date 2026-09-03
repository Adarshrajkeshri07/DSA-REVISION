#include<iostream>
#include<algorithm>
using namespace std ; 
void selection(int a[] , int size){
    for(int i = 0 ; i < size ; i++){
        int smallest = i ; 
        for(int j = i + 1 ; j < size; j++){
            if(a[j] < a[smallest]){
                smallest = j ; 
            }
        }
        swap(a[smallest] , a[i]) ; 

    }
    return  ; 
}
int main()
{
    int a[5] = {6, 2, 3, 4, 6};
    int size = 5;
    selection(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
    return 0;
}