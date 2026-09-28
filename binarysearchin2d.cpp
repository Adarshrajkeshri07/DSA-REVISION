#include <iostream>
using namespace std;

bool binarySearch(int a[], int size, int target)
{
    int st = 0, end = size - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (a[mid] == target)
        {
            return true;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }

    return false;
}

int main()
{

    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = 3, cols = 3, target = 8;

    int i = 0, j = 2;

    while (i <= j)
    {

        int mid = (i + j) / 2;

        // Check whether target can be present in this row
        if (a[mid][0] <= target && target <= a[mid][2])
        {

            if (binarySearch(a[mid], 3, target))
            {
                cout << "valid";
            }
            else
            {
                cout << "invalid";
            }

            return 0;
        }

        // Target is smaller -> go left
        else if (target < a[mid][0])
        {
            j = mid - 1;
        }

        // Target is bigger -> go right
        else
        {
            i = mid + 1;
        }
    }

    cout << "invalid";

    return 0;
}