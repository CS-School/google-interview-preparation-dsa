#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>> finalIntervals;

    if (intervals.size() == 0) {
        return finalIntervals;
    }

    sort(intervals.begin(), intervals.end());
    vector<int> tempInterval = intervals[0];

    for(auto it: intervals){
        if (it[0] <= tempInterval[1]){
            tempInterval[1] = max({it[1], tempInterval[1]});
        } else {
            finalIntervals.push_back(tempInterval);
            tempInterval = it;
        }
    }

    finalIntervals.push_back(tempInterval);
    return finalIntervals;
}

// Time Complexity:- O(NLogN) + O(N) => O(NLogN)
// Space Complexity:- O(N)



































int main() {
    vector<vector<int> > intervals = {{1,3},{2,6},{8,10},{8,9},{9, 11},{15,18},{2,4},{16,17}};

    vector<vector<int> > res = merge(intervals);

    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[i].size(); j++) {
            cout<<res[i][j]<<" ";
        }

        cout<<endl;
    }
}