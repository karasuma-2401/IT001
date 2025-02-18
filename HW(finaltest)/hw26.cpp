#include <iostream>
using namespace std;
long a[10000000];
void swap_array(long n) {
     a[0] = n;
    for (long i = 1; i < n; i++) {
        a[i] = i;
    }
}
bool special_cases(long n, unsigned long long x) {
    if (x == (n - 1) * (n - 2) / 2) {
        for (long j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        return true;
    }
    else if (x == 0) {
        for (long j = 1; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << a[0] << " ";
        return true;
    }
    return false;
}
void arrange_array(long n, unsigned long long x, unsigned long long s) {
    long i = 0, j = 1, k = 1, l = 0;
    while (s != x) {
        if (i == n - 1) break;
        if (j == n - i - 1) {
            j = 1;
            i++;
        }
        if (s > x && k > -1) {
            swap(a[k - 1], a[k]);
            s -= (n - 1 - k);
            l = (n - 1) - k;
            k++;
        } else {
            if (k > 0) {
                swap(a[k - 2], a[k - 1]);
                k = -1;
                s += l;
            }
            swap(a[n - 1 - i], a[n - j - i - 1]);
            s--;
            j++;
        }
    }
}
void out_array(long n) {
    for (long j = 0; j < n; j++) {
        cout << a[j] << " ";
    }
}
int main() {
    unsigned long long n, x;
    cin >> n >> x;
    if (n < 3 || x < 0 || x > (n - 1)*(n - 2) / 2) {
        cout << -1;
    }
    else{
        swap_array(n);
        if (special_cases(n, x)) {
            return 0;
        }
        unsigned long long s = (n - 1) * (n - 2) / 2;
        arrange_array(n, x, s);
        out_array(n);
    }
}
