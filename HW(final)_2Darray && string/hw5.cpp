#include <iostream>
using namespace std;
int main(){
    int n,m; cin >> n >>m;
    float a[n][m];
    for (int i =0; i < n; i++){
        for (int j =0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int l, k; cin >> l >>k;
    float b[l][k];
    for (int i =0; i < l; i++){
        for (int j =0; j < k; j++){
            cin >> b[i][j];
        }
    }
    float c[n][k];
    for (int i =0; i < n; i++){
        for (int j =0; j < k; j++){
            c[i][j] =0;
            for (int h =0; h < m; h++){
                c[i][j] += a[i][h]* b[h][j];
            }
        }
    }
    for (int i =0; i < n; i++){
        for (int j =0; j < k; j++){
            cout << c[i][j] <<" ";
        }
        cout << endl;
    }
}