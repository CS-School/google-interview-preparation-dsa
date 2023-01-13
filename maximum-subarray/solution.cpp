#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int ans = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        max_ending_here = max_ending_here + nums[i];
        if (ans < max_ending_here)
            ans = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return ans;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums) << endl;
}