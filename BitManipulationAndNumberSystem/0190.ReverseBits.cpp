#include <iostream>
#include <bitset> // for binary representation
using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t reversed = 0;
        for (int i = 0; i < 32; i++)
        {
            uint32_t bit = n & 1;      // get last bit of n
            reversed = reversed << 1;  // shift reversed to left
            reversed = reversed | bit; // add bit to reversed
            n = n >> 1;                // shift n to right
        }
        return reversed;
    }
};

int main()
{
    Solution sol;
    uint32_t num;
    cout << "Enter an unsigned 32-bit integer: ";
    cin >> num;

    uint32_t reversed = sol.reverseBits(num);

    cout << "Original (bin):  " << bitset<32>(num) << endl;
    cout << "Reversed (bin):  " << bitset<32>(reversed) << endl;
    cout << "Reversed (int):  " << reversed << endl;

    return 0;
}
