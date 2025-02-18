#include <iostream>
using namespace std;
void erase(int a[], int &n, int p, int k) {
    for (int i = p; i + k < n; i++) {
        a[i] = a[i + k];
    }
    n -= k;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int left, right;   cin >> left >> right;
    erase(a, n, left, right - left+1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}