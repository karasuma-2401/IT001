#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n; 
    cin >> n;
    int count[361] = {0};
    count[0] = 1, count[360] = 1;
    int max_val = -1;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int angular_deflection = 0;
    for (int i = 0; i < n; i++) {
        angular_deflection = (angular_deflection + a[i]) % 360;
        count[angular_deflection]++;
    }
    angular_deflection = 0; 
    for (int i = 1; i <= 360; i++) {
        if (count[i] > 0){
            max_val = max(max_val, i - angular_deflection);
            angular_deflection = i;
        }
    }
    max_val = max(max_val, 360 - angular_deflection);
    cout << max_val;
}
