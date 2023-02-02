#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int maxMin(vector<int> &A) {
    int curMax = INT_MIN;
    int curMin = INT_MAX;
    
    for(int i = 0; i<A.size(); i++) {
        curMax = max(A[i], curMax);
        curMin = min(A[i], curMin);
    }
    
    return curMax + curMin;
}

int main() {
    vector<int> A = {-2, 1, -4, 5, 3};
    cout<<maxMin(A)<<endl;
    return 0;
}
