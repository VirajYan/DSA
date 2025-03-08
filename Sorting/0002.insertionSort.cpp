// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> insertionSort(vector<int> &arr)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            int temp = arr[i];
            int j = i - 1;

            while (j >= 0 && arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }
        return arr;
    }
};

int main()
{
    vector<int> arr = {5, 4, 10, 1, 6, 2};
    Solution s;
    vector<int> ans = s.insertionSort(arr);
    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}