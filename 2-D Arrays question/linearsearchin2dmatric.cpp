
#include <iostream>
#include <vector>
    using namespace std;

void searchTarget(vector<vector<int>> arr, int target)
{
    int rows = arr.size();
    int cols = arr[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
            {
                cout << "Row of the target is: " << i << endl;
                cout << "Column of the target is: " << j << endl;
            }
        }
    }
}

int main()
{
    int rows, cols;
    int target = 12;

    cout << "Enter the rows of matrix: ";
    cin >> rows;

    cout << "Enter the columns of matrix: ";
    cin >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    searchTarget(matrix, target);

    return 0;
}

