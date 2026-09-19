#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{

    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}};

    int n = grid.size();

    int repeated = -1;
    int missing = -1;
    int expsum = 0 , actualsum = 0 ; 
    unordered_set<int> s ; 

for(int i = 0 ; i < n ; i++){
    for(int k = 0 ; k < n ; k++){
        actualsum += grid[i][k] ; 
        if(s.find(grid[i][k]) != s.end()){
            repeated = grid[i][k] ; 
        }
        s.insert(grid[i][k]) ; 
    }
}
expsum = (n*n) * (n*n+1) / 2 ; 
missing = expsum + repeated - actualsum ; 

    cout << "Repeated: " << repeated << endl;
    cout << "Missing: " << missing << endl;

    return 0;
}