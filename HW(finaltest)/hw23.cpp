#include <iostream>
using namespace std;
unsigned long long binary_search_days(unsigned long long a, unsigned long long k, unsigned long long b, unsigned long long m, unsigned long long n) {
    unsigned long long l = 0 , r = n ;
    unsigned long long res =r;
    while (l <= r) {
        unsigned long long mid = l + (r-l)/2;
        unsigned long long days_worked1 = mid - (mid / k);
        unsigned long long days_worked2 = mid - (mid / m);
        unsigned long long trees_cut = days_worked1 * a + days_worked2 * b;
        if ( days_worked1 > n/a || days_worked2 > n/b) {
            res = mid;
            r = mid -1; 
        } 
        else {
            if ( trees_cut >= n) {
                res = mid;
                r = mid-1;
            } else {
                l = mid + 1;
            }
        }
    }
    return res;
}
int main() {
    unsigned long long a, k, b, m, n;
    cin >> a >> k >> b >> m >> n;
    cout << binary_search_days(a, k, b, m, n) << endl;
}