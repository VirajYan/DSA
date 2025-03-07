class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> nums3;
        
        int i = 0;
        int j = 0;
        
        // Merge the two sorted arrays into nums3
        while (i < n1 && j < n2) {
            if (nums1[i] < nums2[j]) {
                nums3.push_back(nums1[i]);
                i++;
            } else {
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        
        // If there are remaining elements in nums1, append them to nums3
        while (i < n1) {
            nums3.push_back(nums1[i]);
            i++;
        }
        
        // If there are remaining elements in nums2, append them to nums3
        while (j < n2) {
            nums3.push_back(nums2[j]);
            j++;
        }
        
        int n = nums3.size(); // Total number of elements in nums3
        if (n % 2 == 1) {
            return nums3[n / 2]; // Odd number of elements
        } else {
            // Even number of elements, calculate the median
            return (nums3[n / 2 - 1] + nums3[n / 2]) / 2.0;
        }
    }
};
