#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> wave(vector<int> &A) {
    for (int i = 0; i < A.size(); i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && A[i-1] > A[i] )
            swap(A[i], A[i-1]);
 
        // If current even element is smaller than next
        if (i<A.size()-1 && A[i] < A[i+1] )
            swap(A[i], A[i + 1]);
    }

    return A;
}

int main() {
    vector<int> A = {10, 5, 6, 3, 2, 20, 100, 80};

    wave(A);

    for (int i=0; i<A.size(); i++)
       cout << A[i] << " ";

    cout<<endl;

    return 0;
}