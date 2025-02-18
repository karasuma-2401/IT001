#include <iostream>
using namespace std;
bool odd ( long long n){
    return n % 2 == 1;
}
int digit_num ( long long n ){
    int count =0;
    while ( n !=0){
        n/=10;
        count++;
    }
    return count;
}
int max_mid ( long long n){
    int mid, digits = digit_num(n);
    if ( odd(digits)){
        for ( int i =1; i <= digits/2; i++){
            n/=10;
        }
        mid = n %10;
    }
    else {
        for ( int i =1; i < digits/2; i++){
            n/=10;
        }
        mid = n %100;
    }
    return mid;
}
int main(){
    int n; cin >> n;
    int max_val = -1;
    long long res = 0;
    while ( n--){
        long long x; cin >> x;
        if ( max_mid(x) >= max_val){
            max_val = max_mid(x);
            res = x;
        }
    }
    cout << res;
}