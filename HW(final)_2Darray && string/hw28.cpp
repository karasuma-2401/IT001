#include <iostream>
using namespace std;
int n, m, k;
int a[100][100], check[100]= {0};
int res = 2e9; 
void next (int i, int sum){
    if (i == n){   
        bool ok = true;
        for (int j = 1; j <= m; j++) {
            if (check[j] < k) {
                ok = false;
                break;
            }
        }
        if (ok && sum < res)  res = sum; 
        return;
    }
    next (i + 1, sum);
    for (int j = 0; j <= m; j++)    check[j] += a[i][j];
    next (i+ 1, sum + a[i][0]);
    for (int j = 0; j <= m; j++)    check[j] -= a[i][j]; 
}
int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= m; j++)
            cin >> a[i][j];
        
    next (0, 0);
    if (res != 2e9) cout << res << endl; 
    else cout << -1;
}
