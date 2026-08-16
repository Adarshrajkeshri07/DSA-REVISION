#include <iostream>
#include <climits>
using namespace std;
bool ispossible(int a[], int n, int m, int mid)
{
    int count = 1, time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + a[i] <= mid)
        {
            time += a[i];
        }
        else
        {
            count++;
            time = a[i];
        }
    }
    if (count <= m)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a[5] = {5, 10, 2, 6, 12};
    int size = 5;
    int ans = -1, st = a[0], end = a[0];
    for (int i = 1; i < size; i++)
    {
        st = max(st, a[i]);
        end += a[i];
    }
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (ispossible(a, size, 4, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    cout << ans;
    return 0;
}