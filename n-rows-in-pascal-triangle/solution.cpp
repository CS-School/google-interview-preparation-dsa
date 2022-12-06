#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > generatePascalsTriangle(int numRows) {
    vector<vector<int> > res;

    res.push_back({1});

    for(int i=1; i<numRows; i++) {
        vector<int> row;
        row.push_back(1);

        for(int j=1; j<=i-1; j++) {
            row.push_back(res[i-1][j-1] + res[i-1][j]);
        }

        row.push_back(1);
        res.push_back(row);
    }

    return res;
}

int main() {
    vector<vector<int> > res = generatePascalsTriangle(3);

    for(int i=0; i<res.size(); i++) {
        for(int j=0; j<res[i].size(); j++) {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}