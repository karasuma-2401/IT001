#include <iostream>
using namespace std;
int main() {
    int n ; cin >> n;
    int a[n];
    int max = -2e9;
    for ( int i =0; i < n; i++){
        cin >> a[i];
        if ( a[i] > max )   max = a[i];
    }
    int max_two = -2e9;
    bool ok = false;
    for ( int i =0; i < n;i++){
        if ( a[i] > max_two && a[i] < max){
            max_two = a[i];
            ok = true;
        }
    }
    if ( !ok) cout << 0;
    else cout << max_two;
}