#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n];
    int angular_deflection[n+1];
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    angular_deflection[0] = 0; 
    for ( int i =1; i < n+1; i++){
        angular_deflection[i] = (angular_deflection[i-1] + a[i-1]) %360;
    }
    sort(angular_deflection, angular_deflection + n+1);
    int max_val = 0;
    for (int i = 1; i < n+1; i++) {
        max_val = max(max_val, angular_deflection[i] - angular_deflection[i - 1]);
    }
    max_val = max(max_val, 360 - angular_deflection[n]);
    cout << max_val; 
}
