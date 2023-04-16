#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> &nums, int target)
{

    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{

    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int target1 = 9;
    cout << search(nums1, target1) << endl;

    return 0;
}