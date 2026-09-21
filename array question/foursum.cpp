#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &a)
    {
        vector<vector<int>> ans;
        int n = a.size();
        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
                continue;
            ;
            for (int j = i + 1; j < n; j++)
            {
                if (j > i + 1 && a[j] == a[j - 1])
                    continue;
                int p = j + 1, q = n - 1;
                while (p < q)
                {
                    long long sum = (long long)a[i] + a[j] + a[p] + a[q];
                    if (sum < 0)
                    {
                        p++;
                    }
                    else if (sum > 0)
                    {
                        q--;
                    }
                    else
                    {
                        ans.push_back({a[i], a[j], a[p], a[q]});
                        p++, q--;
                        if (p < q && a[p] == a[p - 1])
                            p++;
                        if (p < q && a[q] == a[q + 1])
                            q--;
                    }
                }
            }
        }
        return ans;
    }
};
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution obj;
    vector<vector<int>> ans = obj.fourSum(nums);
    for (auto x : ans)
    {
        cout << "[";
        for (int n : x)
        {
            cout << n;
        }
        cout << "]";
    }
    return 0;
}