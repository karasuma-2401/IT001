#include <iostream>
#include <algorithm>
using namespace std;
int shareholders(int a[], int n, int x){
    int res = -1;
    int l =0, r = n-1;
    while ( l <= r){
        int mid = (l+r)/2;
        if ( a[mid] <= x){
            res = mid;
            l = mid +1;
        }
        else r = mid - 1;
    }
    return res +1;
}
int investors(int a[], int n, int x){
    int res = n;
    int l =0, r = n-1;
    while ( l <= r){
        int mid = (l+r)/2;
        if ( a[mid] >=x){
            res = mid;
            r = mid -1;
        }
        else l = mid +1;
    }
    return n - res;
}
void min_price(int a[], int b[], int n, int m){
    sort(a, a + n); 
    sort(b, b + m); 
    long long l = 1 ,r = 2e9, res = -1;
    while (l <= r) {
        int mid = (l+r) / 2;
        int shareholder = shareholders(a, n, mid); 
        int investor = investors(b, m, mid);  
        if (shareholder >= investor) {
            res = mid; 
            r = mid - 1;
        } else l = mid + 1;
    }
    cout << res;
}
int main() {
    int n, m;   cin >> n >> m;
    int a[n], b[m]; 
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i){
        cin >> b[i];
    }
    min_price(a,b,n,m);
}
