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
        for (int i = 0; i < nums.size() - 1; i++)
        {
            for (int j = 0; j < nums.size() - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        return nums;
    }
};

int main()
{
    vector<int> nums = {1, 3, 2, 5, 4};
    Solution s;
    vector<int> ans = s.bubbleSort(nums);

    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}