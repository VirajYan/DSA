#include <bits/stdc++.h>
using namespace std;

void deleteGreatestValue(vector<vector<int>> &grid)
{
    for (int i = 0; i < grid.size(); i++) // row wise sort
    {
        sort(grid[i].begin(), grid[i].end());
    }

    int ans = 0;
    for (int i = 0; i < grid[0].size(); i++) // column wise traversing
    {
        int maxi = INT_MIN;
        for (int j = 0; j < grid.size(); j++) // row wiese traversing
        {
            maxi = max(maxi, grid[j][i]); // taking max element
        }
        ans += maxi; // ans me add kro jo maxi hai
    }
    cout << ans;
}

int main()
{
    int row1 = 2;
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