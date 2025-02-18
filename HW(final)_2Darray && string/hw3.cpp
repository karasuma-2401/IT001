#include <iostream>
using namespace std;
int main(){
    int n, m; cin>> n >> m;
    double a[n][m];
    double trans[m][n];
    for (int i =0; i < n; i++){
        for (int j =0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i =0; i < n; i++){
        for (int j =0; j < m; j++){
            trans[j][i] = a[i][j];
        }
    }
    for (int i =0; i < m; i++){
        double max_val = -2e9;
        for (int j =0; j < n; j++){
            if ( trans[i][j] > max_val) max_val = trans[i][j];
        }
        cout << "Gia tri lon nhat tren cot " << i <<" la: " << max_val << endl;
    }
}