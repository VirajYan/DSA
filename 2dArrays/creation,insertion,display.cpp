// taking static input
//  Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12}; //taking static input, use this by commenting row/col wise input

    int arr[3][4] = {{1, 2, 3, 4}, {4, 5, 6, 7}, {7, 8, 9, 10}}; // taking static input, but specified to use of row wise what to print, use this by commenting row/col wise input

    // int arr[3][4]; //use this if doing row/col wise input
    /*row wise input
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    */

    /* col wise input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    */

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}