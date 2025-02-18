#include <iostream>
#include <math.h>
using namespace std;
int reverseNumber (int n){
    int res =0, start = n;
    while ( n !=0){
        int digit = n %10;
        res = res*10 + digit;
        n/=10;
    }
    return res;
}
int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
}
