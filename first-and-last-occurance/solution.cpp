#include <iostream>
#include <vector>
using namespace std;

int getFirstOccurance(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int firstOccurance = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            firstOccurance = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return firstOccurance;
}

int getLastOccurance(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;
    int lastOccurance = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] == target)
        {
            lastOccurance = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return lastOccurance;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    return {getFirstOccurance(nums, target), getLastOccurance(nums, target)};
}

int main()
{
    vector<int> nums = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};

    vector<int> res = searchRange(nums, 2);

    cout << res[0] << " " << res[1] << endl;

    return 0;
}