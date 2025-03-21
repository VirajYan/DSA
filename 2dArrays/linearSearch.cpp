#include <iostream>
#include <vector>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Enter number to be searched: ";
    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}