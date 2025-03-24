#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int row = accounts.size();
    int col = accounts[0].size();

    int maxi = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += accounts[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    return maxi;
}

int main()
{
    int row = 3;
    int col = 3;

    vector<vector<int>> accounts(row, vector<int>(col));

    cout << "Enter elements of the 3x3 matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> accounts[i][j];
        }
    }

    cout << "Matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << accounts[i][j] << " ";
        }
        cout << endl;
    }

    int ans = maximumWealth(accounts);
    cout << ans;
}