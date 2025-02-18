#include <iostream>
using namespace std;
#define MAX 1000
long long trans[MAX][MAX];
long long max_kytu[MAX];
long long digits ( long long n){
    int count =0;
    if (n <= 0) count++;
    while ( n !=0){
        n/=10;
        count++;
    }
    return count;
}
void input (long long a[][MAX], int r, int c){
for ( int i =0;i < r; i++){
        for (int j =0; j < c; j++){
            cin >> a[i][j];
        }
    }
}
void trans_matrix (long long a[][MAX], int r, int c){
    for (int i =0; i < r; i++){
        for (int j =0; j < c; j++){
            trans[j][i] = a[i][j];
        }
    }
    for (int i =0; i < c; i++){
        int max_val = -2e9;
        for (int j =0; j < r; j++){
            if (digits(trans[i][j]) > max_val)  max_val = digits(trans[i][j]);
        }
        max_kytu[i] = max_val;
    }
}
int main(){
    int r, c; cin>> r >> c;
    long long a[MAX][MAX];
    input (a,r,c);
    trans_matrix(a,r,c);
    for (int i = 0; i < r; i++){
        for (int j =0; j < c; j++){
            int tmp = max_kytu[j];
            while ( tmp - digits(a[i][j])){
                cout << " ";
                tmp--;
            }
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
}
