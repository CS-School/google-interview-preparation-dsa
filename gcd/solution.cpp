#include <iostream>
#include<cmath>
using namespace std;

int gcd(int x, int y) {
    int dividend = max(x, y);
    int divisor= min(x, y);
    
    while (divisor != 0) {
        int rem = dividend % divisor;
        dividend = divisor;
        divisor = rem;
    }
    
    return dividend;
}

int main() {
    cout<<gcd(6, 9)<<endl;
}