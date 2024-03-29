#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumGap(const vector<int> &A)
{
    int n = A.size();

    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(A[i], i));
    }

    sort(v.begin(), v.end());

    int ans = 0;
    int lmin = v[0].second;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i].second - lmin);
        lmin = min(lmin, v[i].second);
    }
    return ans;
}

// Time Complexity:- O(nlogn)
// Space Complexity:- O(N)

int main()
{
    vector<int> a = {3, 5, 4, 2};
    cout << maximumGap(a) << endl;
}