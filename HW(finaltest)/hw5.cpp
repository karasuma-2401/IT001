#include <iostream>
using namespace std;
bool prime (int n){
    for ( int i =2; i*i <= n; i++){
        if ( n % i ==0){
            return false;
        }
    }
    return n >1;
}
int GCD ( long long a, long b){
    while ( b !=0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
    long long n; cin >> n;
    for ( long long i = n+1; i > n ; i++){
        if ( prime(GCD (i,n))){
            cout << i;
            break;
        }
    }
}