#include <iostream>
#include <vector>
using namespace std;

vector<int> printWave(int arr[][3], int nRow, int nCol)
{
    vector<int> ans;
    for (int col = 0; col < nCol; col++)
    {
        if (col & 1)
        {
            // odd mtlab bottom to top
            for (int row = nRow - 1; row >= 0; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
        else
        {
            // even
            for (int row = 0; row < nRow; row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    printWave(arr, 3, 3);
    return 0;
}