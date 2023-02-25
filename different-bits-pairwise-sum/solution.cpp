#include <iostream>
#include <vector>
using namespace std;

#define mod 1000000007

int cntBits(vector<int> &A)
{

    long long int res = 0;
    long long int countOn = 0;

    for (int i = 0; i < 32; i++)
    {
        countOn = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if (A[j] & (1 << i))
                countOn++;
        }

        int countOff = A.size() - countOn;
        int diff = countOn * countOff * 2;
        res += diff;
    }

    res = res % mod;
    res = (int)res;

    return res % mod;
}

int main()
{
    vector<int> A = {1, 3, 5};
    cout << cntBits(A) << endl;
    return 0;
}