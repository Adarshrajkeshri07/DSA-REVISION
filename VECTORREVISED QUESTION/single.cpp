#include<iostream>
#include<vector>
using namespace std ; 
int main(){
vector<int> vec = {1,5,7,2,0};
bool match ; 
for(int i = 0 ;i < vec.size() ; i++){
    match = true ;
    for(int j = 0 ;  j < vec.size() ; j++){
        if(i!=j && vec[i]==vec[j]){
            match = false ; 
        }
    }
}
if(match==true){
    cout << " invalid" ; 
}else  cout << " match suceess  " ; 
return 0 ; 
}