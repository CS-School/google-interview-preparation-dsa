#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int first = -1;
    int second = -1;
    int cnt1 = 0;
    int cnt2 = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int x = nums[i];
        if (x == first)
        {
            cnt1++;
        }
        else if (x == second)
        {
            cnt2++;
        }
        else if (cnt1 == 0)
        {
            first = x;
            cnt1 = 1;
        }
        else if (cnt2 == 0)
        {
            second = x;
            cnt2 = 1;
        }
        else
        {
            cnt1--;
            cnt2--;
        }
    }
    cnt1 = 0;
    cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == first)
            cnt1++;
        else if (nums[i] == second)
            cnt2++;
    }
    vector<int> ret;
    if (cnt1 > n / 3)
        ret.push_back(first);
    if (cnt2 > n / 3)
        ret.push_back(second);
    return ret;
}

int main()
{
    vector<int> v = {2, 2, 3, 1, 1, 2, 1};
    vector<int> res = majorityElement(v);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}