#include <iostream>
#include <vector>
using namespace std;

vector<int> getPascalsTriangleRow(int rowIndex) {
    vector<int> prev={1};

    for(int i=1;i<=rowIndex;i++) {
        vector<int> curr(i+1);
        curr[0] = 1;
        
        for(int j=1;j<i;j++) {
            curr[j]=prev[j]+prev[j-1];
        }
        
        curr[i] = 1;
        prev=curr;
    }
    return prev;
}

// Time complexity:- O(N^2)
// Space Complexity:- O(N)



int main() {
    vector<int> res = getPascalsTriangleRow(4);

    for(int i=0; i<res.size(); i++) {
        cout<<res[i]<<" ";
    }
    cout<<endl;
}



















