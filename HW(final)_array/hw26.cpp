#include <iostream>
using namespace std;
long long divide (long long x, long long n) {
    return x / n;
}
int main() {
    long long l, r;
    cin >> l >> r;
    l += (l % 2);
    r -= (r % 2);
    long long sum = divide(r, 2) - divide(l - 1, 2); 
    long long pow = 4;
    while (pow <= r) {
        sum += divide(r, pow) - divide(l - 1, pow);  
        pow *= 2;
    }
    cout << sum;
}