/*two pointers
class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 0) return false;
        long long left = 0;
        long long right = static_cast<long long>(sqrt(c));

        while (left <= right) {
            long long product = left * left + right * right;
            if (product == c) {
                return true;
            }
            if (product < c) {
                left++;
            } else {
                right--;
            }
        }
        return false;
    }
};
*/
/*
class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c < 0) return false;
        long long low = 0;
        long long high = static_cast<long long>(sqrt(c));

        while(low <= high)
            {
                long long mid = (high+low)/2;
                if(high*high + low*low == c)
                {
                    return true;
                }

                if(high*high + low*low < c)
                {
                    low = mid;
                }
                else
                {
                    high = mid;
                }
            }
        return false;
    }
};

*/
class Solution
{
public:
    bool judgeSquareSum(int c)
    {
        for (int divisor = 2; divisor * divisor <= c; divisor++)
        {
            if (c % divisor == 0)
            {
                int exponentCount = 0;
                while (c % divisor == 0)
                {
                    exponentCount++;
                    c /= divisor;
                }
                if (divisor % 4 == 3 && exponentCount % 2 != 0)
                {
                    return false;
                }
            }
        }
        return c % 4 != 3;
            
    }
};