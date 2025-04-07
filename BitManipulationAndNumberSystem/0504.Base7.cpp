#include <iostream>
using namespace std;

class Solution
{
public:
    string convertToBase7(int num)
    {
        if (num == 0) // checking if num is 0
        {
            return "0";
        }
        bool isNegative = num < 0; // checking if number is negative, if yes return true
        num = abs(num);            // take absolute of num so that if any num is negative then convert it to +ve
        string result;             // to stre ans
        while (num > 0)            // when num is greater than 0 for dividing
        {
            result = to_string(num % 7) + result; // store modulo of 7 plus add the result
            num /= 7;                             // divide the number so that further dividations can be done
        }
        if (isNegative) // if above var returned true, then just add negative sign before the result
        {
            result = "-" + result;
        }
        return result; // return rrsult
    }
};

int main()
{
    int num;
    cin >> num;
    Solution s;

    string ans = s.convertToBase7(num);
    cout << ans;
    return 0;
}