#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100
void NhapMaTran(int a[MAXR][MAXC], int &n) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
long long TinhDinhThuc(int a[MAXR][MAXC], int n) {
    if (n == 1) return a[0][0];
    if (n == 2) return (long long)a[0][0] * a[1][1] - (long long)a[0][1] * a[1][0];
    long long det = 0;
    int sum_det[MAXR][MAXC];
    for (int k = 0; k < n; k++) {
        for (int i = 1; i < n; i++) {
            int index = 0;
            for (int j = 0; j < n; j++) {
                if (j == k) continue;
                sum_det[i - 1][index++] = a[i][j];
            }
        }
        det += (long long)a[0][k] * TinhDinhThuc(sum_det, n - 1) * ((k % 2 == 0) ? 1 : -1);
    }
    return det;
}
int main() {
    int n;
    int a[MAXR][MAXC]; 
    NhapMaTran(a, n);
    cout << TinhDinhThuc(a, n);
    return 0;
}
