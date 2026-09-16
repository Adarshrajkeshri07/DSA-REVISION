#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int expSum = 0, actualSum = 0;

        unordered_set<int> s;

        // Array ke elements set mein insert
        for (int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
            actualSum += nums[i];
        }

        // 0 se n tak expected sum
        for (int i = 0; i <= n; i++)
        {
            expSum += i;
        }

        // Missing number
        return expSum - actualSum;
    }
};

int main()
{
    vector<int> nums = {3, 0, 1};

    Solution obj;

    cout << obj.missingNumber(nums);

    return 0;
}