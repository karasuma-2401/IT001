#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int a_b[n]; 
    int index = 0;
    for (int i = 0; i < n; i++) {
        bool ok = false;
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                ok = true; 
                break;
            }
        }
        if (!ok){ 
            a_b[index++] = a[i];
        }
    }
    for (int i = 0; i < index; i++) {
        cout << a_b[i] << " ";
    }
}
