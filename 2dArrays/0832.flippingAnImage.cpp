#include <bits/stdc++.h>
using namespace std;

void deleteGreatestValue(vector<vector<int>> &grid)
{
    int n = grid.size();
    for (int i = 0; i < n; i++) // row wise sort
    {
        reverse(grid[i].begin(), grid[i].end());
    }

    int m = grid[0].size();
    for (int i = 0; i < n; i++) // column wise traversing
    {
        for (int j = 0; j < m; j++) // row wiese traversing
        {
            grid[i][j] ^= 1;
        }
    }

    for (int i = 0; i < n; i++) // column wise traversing
    {
        for (int j = 0; j < m; j++) // row wiese traversing
        {
            cout << grid[i][j] << " ";
        }
    }
}

int main()
{
    int row1 = 3;
    int col1 = 3;
    vector<vector<int>> grid(row1, vector<int>(col1));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << "matrix1 is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    deleteGreatestValue(grid);
    return 0;
}