#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &a)
    {
vector<vector<int>> ans ; 
        int n = a.size();
        sort(a.begin() , a.end());
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
                continue;
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                int sum = a[i] + a[j] + a[k];
                if(sum > 0){
                    k-- ; 
                }else if(sum < 0 ){
                    j++ ;
                }
                    else{
                        ans.push_back({a[i] , a[j] , a[k]}) ;
                        j++ , k-- ; 
                        while(j < k  && a[j] == a[j-1]) j++ ; 
                        while(j < k  && a[k] == a[k+1]) k-- ; 
                }
            }
        }
        return ans ; 
    }
};
int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution obj ;
    vector<vector<int>> ans = obj.threeSum(nums);
    for(auto x : ans){
        cout << "[" ; 
        for(int n : x){
            cout << n ; 
        }
        cout << "]" ; 
    }
    return 0 ; 
}