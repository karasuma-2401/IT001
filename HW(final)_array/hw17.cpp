#include <iostream>
using namespace std;
int gcd ( int a, int b){
    while ( b !=0){
        int tmp = a % b;
        a = b;
        b= tmp;
    }
    return a;
}
int before_gcd[1000000];
int after_gcd[1000000];
void all_gcd_array ( int a[], int n){
    before_gcd[0] = a[0];
    for (int i = 1; i < n; i++) {
        before_gcd[i] = gcd(before_gcd[i - 1], a[i]);
    }
    after_gcd[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        after_gcd[i] =  gcd(after_gcd[i + 1], a[i]);
    }
}
void solution ( int a[], int n){
    all_gcd_array (a,n);
    int gcd_max = -2e9;
    int index;
    for (int i = 0; i < n; i++) {
        int current_gcd;
        if (i == 0){
            current_gcd = after_gcd[1];
        } 
        else if (i == n - 1) {
            current_gcd = before_gcd[n - 2];
        } 
        else{
            current_gcd = gcd(before_gcd[i - 1], after_gcd[i + 1]);
        }
        if (current_gcd > gcd_max){
            gcd_max = current_gcd;
            index = i + 1;
        }
    }
    cout << index << " " << gcd_max << endl;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solution(a,n);
}