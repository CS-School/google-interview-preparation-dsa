#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

int maxMin(vector<int> &A) {
    sort(A.begin(), A.end());
    return A[0] + A[A.size() - 1];
}

int main() {
    vector<int> A = {-2, 1, -4, 5, 3};
    cout<<maxMin(A)<<endl;
    return 0;
}