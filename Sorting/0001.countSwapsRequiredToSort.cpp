// here if the array is already sorted/not sorted it still runs O(n^2)
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> bubbleSort(vector<int> &nums)
    {
        bool swapped; // pehele true rakho
        int swapCount = 0;
        for (int i = 0; i <= nums.size() - 1; i++)
        {
            swapped = false; // ab false set kr do
            for (int j = 0; j < nums.size() - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    swapCount++;
                    swapped = true; // agar swap hua to hi true krna hai
                }
            }
            if (!swapped)
                break; // agar poore j me true hua hi nahi, mtlab swap hua hi nahi to break kr do
        }
        cout << "total swaps done : " << swapCount << endl;
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    Solution s;
    vector<int> ans = s.bubbleSort(nums);

    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}