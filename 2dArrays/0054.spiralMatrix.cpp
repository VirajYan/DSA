#include <iostream>
#include <vector>
using namespace std;

void printSpiralMatrix(vector<vector<int>> &arr, int row, int col)
{
    int n = arr.size();
    int m = arr[0].size();

    int total = n * m;
    int count = 0;

    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;

    vector<int> ans;

    while (count < total)
    {
        // Printing first row (left to right)
        for (int i = left; count < total && i <= right; i++)
        {
            ans.push_back(arr[top][i]);
            count++;
        }
        top++;

        // Printing last column (top to bottom)
        for (int i = top; count < total && i <= bottom; i++)
        {
            ans.push_back(arr[i][right]);
            count++;
        }
        right--;

        // Printing last row (right to left)
        for (int i = right; count < total && i >= left; i--)
        {
            ans.push_back(arr[bottom][i]);
            count++;
        }
        bottom--;

        // Printing first column (bottom to top)
        for (int i = bottom; count < total && i >= top; i--)
        {
            ans.push_back(arr[i][left]);
            count++;
        }
        left++;
    }

    // Printing the spiral order
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> arr(3, vector<int>(3));

    // Input matrix
    cout << "Enter 3x3 matrix elements:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Display matrix
    cout << "Matrix entered:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Print spiral order
    cout << "Spiral Order: ";
    printSpiralMatrix(arr, 3, 3);

    return 0;
}
