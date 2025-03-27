#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> v(m, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row1 = 3;
    int col1 = 3;
    vector<vector<int>> matrix(row1, vector<int>(col1));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "matrix1 is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    transpose(matrix);
    return 0;
}