#include <bits/stdc++.h>
using namespace std;

void addBinary(string a, string b)
{
    string result = "";
    int carry = 0;

    // padding
    while (a.size() < b.size())
    {
        a = '0' + a;
    }
    while (b.size() < a.size())
    {
        b = '0' + b;
    }

    for (int i = a.size() - 1; i >= 0; i--)
    {
        int A = a[i] - '0';
        int B = b[i] - '0';
        int sum = A + B + carry;

        carry = sum / 2;
        result += sum % 2 + '0';
    }

    if (carry)
    {
        result += '1';
    }

    reverse(result.begin(), result.end());
    cout << result;
}

int main()
{
    string a;
    string b;

    getline(cin, a);
    getline(cin, b);

    addBinary(a, b);

    return 0;
}