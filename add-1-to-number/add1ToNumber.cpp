#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    reverse(digits.begin(), digits.end());
    int carry = 1;
    int i = 0;

    while(carry == 1) {
        if (i < digits.size()) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i] += 1;
                carry = 0;
            }
        } else {
            digits.push_back(1);
            carry = 0;
        }
        i++;
    }
    reverse(digits.begin(), digits.end());
    return digits;
}

// Time Complexity:- O(N)
// Space Complexity:- O(1)

int main() {
    vector<int> digits = {1, 2, 3};
    digits = plusOne(digits);

    for(int i=0; i<digits.size(); i++) {
        cout<<digits[i]<<" ";
    }
    cout<<endl;
}