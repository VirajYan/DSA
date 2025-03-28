#include <bits/stdc++.h>
using namespace std;

void sortStudents(vector<vector<int>> &score, int k)
{
    int m = score.size();
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (score[i][k] < score[j][k])
            {
                swap(score[i], score[j]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < score[0].size(); j++)
        {
            cout << score[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row1 = 3;
    int col1 = 4;
    vector<vector<int>> score(row1, vector<int>(col1));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> score[i][j];
        }
    }
    cout << "matrix1 is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << score[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter value of k(col): ";
    int k;
    cin >> k;

    sortStudents(score, k);
    return 0;
}