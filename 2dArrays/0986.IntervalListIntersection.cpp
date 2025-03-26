#include <bits/stdc++.h>
using namespace std;

void intervalIntersection(vector<vector<int>> &A, vector<vector<int>> &B)
{
    int aSize = A.size();
    int bSize = B.size();

    vector<int> temp(2);
    vector<vector<int>> result;

    int APtr = 0; // pointers to iterate
    int BPtr = 0; // pointers to iterate

    while (APtr < aSize && BPtr < bSize)
    {
        if (A[APtr][0] <= B[BPtr][1] && A[APtr][1] >= B[BPtr][0])
        { // condition to check, if there exists an intersection

            temp[0] = max(A[APtr][0], B[BPtr][0]); // finding out the maximim of the first values
            temp[1] = min(A[APtr][1], B[BPtr][1]); // finding out the minimum of second values
            // thats how we are going to get the intersection

            result.push_back(temp);
        }
        if (A[APtr][1] < B[BPtr][1]) // whatever is the smaller value we will increment
        {
            APtr += 1; // here a is smaller
        }
        else
        {
            BPtr += 1; /// here b is smaller
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << ",";
    }
}
int main()
{
    int row1 = 4;
    int col1 = 2;
    vector<vector<int>> A(row1, vector<int>(col1));
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "matrix1 is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int row2 = 4;
    int col2 = 2;
    vector<vector<int>> B(row2, vector<int>(col2));
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "matrix2 is: " << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    intervalIntersection(A, B);
    return 0;
}

// 0 2 5 10 13 23 24 25
// 1 5 8 12 15 24 25 26