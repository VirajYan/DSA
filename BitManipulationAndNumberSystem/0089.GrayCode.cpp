#include <bits/stdc++.h>
using namespace std;
vector<string> generate(int n)
{
    if (n == 1)
    {
        return {"0", "1"};
    }

    vector<string> ans;
    vector<string> temp = generate(n - 1);

    for (int i = 0; i < temp.size(); i++)
    {
        ans.push_back("0" + temp[i]);
    }
    for (int i = temp.size() - 1; i >= 0; i--)
    {
        ans.push_back("1" + temp[i]);
    }
    return ans;
}

vector<int> grayCode(int n)
{
    vector<string> grayString = generate(n);
    vector<int> ans;
    for (auto i : grayString)
    {
        ans.push_back(stoi(i, 0, 2));
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> ans = grayCode(n);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}