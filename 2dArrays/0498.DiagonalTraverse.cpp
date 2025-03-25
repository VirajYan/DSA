#include <bits/stdc++.h>
using namespace std;
void diagonalTraverse(vector<vector<int>> &mat)
{
    int m = mat.size();
    int n = mat[0].size();

    int row = 0;
    int col = 0;

    vector<int> ans(m * n);

    int index = 0;

    bool up = true;

    while (row < m && col < n)
    {
        // up
        if (up == true)
        {
            while (row > 0 && col < n - 1)
            {
                ans[index++] = mat[row][col];
                row--;
                col++;
            }
            ans[index++] = mat[row][col];
            if (col == n - 1)
            {
                row++;
            }
            else
            {
                col++;
            }
        }
        // down
        else
        {
            while (row < m - 1 && col > 0)
            {
                ans[index++] = mat[row][col];
                row++;
                col--;
            }
            ans[index++] = mat[row][col];
            if (row == m - 1)
            {
                col++;
            }
            else
            {
                row++;
            }
        }
        up = !up;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int row = 3;
    int col = 3;

    vector<vector<int>> mat(row, vector<int>(col));

    cout << "Enter elements of the 3x3 matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }

    cout << "Matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    diagonalTraverse(mat);

    return 0;
}