#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 3, 4, 2, 2};

    int slow = a[0];
    int fast = a[0];
    do{
        
            slow = a[slow];
            fast = a[a[fast]];
        

    } while( slow != fast);
    slow = a[0] ; 
    while(slow != fast){
        slow = a[slow] ; 
        fast = a[fast] ; 
    }

    cout << "Slow: " << slow << endl;
    cout << "Fast: " << fast << endl;

    return 0;
}