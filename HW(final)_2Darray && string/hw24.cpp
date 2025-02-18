#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void output(string num) {
    long long res = 0;
    for (int i = num.size() - 1; i >= 0; i--) {
        int digit = (num[i] - '0') + res;
        if ((digit % 10) == 5) {
            res = digit/ 10 + 1;
        } else {
            if ((digit % 10) % 2 != 0) {
                res = digit % 10 + digit / 10;
            } else  res = (digit % 10) / 2 + digit / 10;
        }
    }
    while (res % 2 == 0 && res != 0)    res /= 2;
    if (res == 5) res = 1;
    cout << res << endl;
}
int main() {
    int test;
    cin >> test;
    while (test--) {
        string num;
        cin >> num;
        output(num);
    }
}
