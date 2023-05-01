#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int low = 0;
    int high = nums.size() - 1;

    if (nums.size() == 1)
    {
        return 0;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (mid == 0)
        {
            if (nums[mid] > nums[mid + 1])
            {
                return mid;
            }
            else
            {
                return mid + 1;
            }
        }
        else if (mid == nums.size() - 1)
        {
            if (nums[mid] > nums[mid - 1])
            {
                return mid;
            }
            else
            {
                return mid - 1;
            }
        }
        else if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid] < nums[mid - 1])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {25, 5, 10, 20, 22, 26};
    cout << findPeakElement(nums) << endl;
}