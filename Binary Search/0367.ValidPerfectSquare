class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 1;
        int right = num;
        while(left <= right)
        {
            int mid  = left + (right - left)/2;
            long long square = (long long) mid*mid;
            if(square == num)
            {
                return true;
            }
            if(square < num)
            {
                left = mid + 1;
            }
            if(square > num)
            {
                right = mid - 1;
            }
        }
        return false;
    }
};