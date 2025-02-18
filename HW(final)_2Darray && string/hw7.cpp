#include <iostream>
using namespace std;
bool frobenius (double a[][100], int n ){
    for (int i =0; i < n; i++){
        if ( a[i][i] != 1)  return false;
    }
    int special_col[100] = {0};
    int count =0;
    for ( int i =0; i < n; i++){
        for (int j =0; j < i ; j++){
            if ( a[i][j] !=0)   special_col[j] = 1;
        }
    }
    for ( int i =0; i < n; i++){
        if ( special_col[i] == 1) count++;
    }
    if ( count > 1) return false;
    for (int i =0; i < n; i++){
        for ( int j = i + 1; j < n; j++){
            if (a[i][j] !=0) return false;
        }
    }
    return true;
}
int main(){
    int n,m; cin >>n >> m;
    double a[100][100];
    for (int i =0; i < n; i++){
        for (int j =0; j < n; j++){
            cin >> a[i][j];
        }
    }
    if (frobenius(a, n))    cout <<"Yes";
    else cout << "No";
}