#include <iostream>
#include <cmath>
using namespace std;
bool prime (int n){
    for ( int i =2; i*i <= n; i++){
        if ( n % i==0)
        return false;
    }
    return n >1;
}
int gcd ( int a, int b){
    while ( b !=0){
        int tmp = a %b;
        a = b;
        b = tmp;
    }
    return a;
}
int sum_common_prime( int a, int b){
    int tmp = gcd (a,b);
    long long sum =0;
    for ( int i =2; i <=tmp; i ++){
        if ( tmp % i ==0 && prime(i))  sum+=i;
    }
    if ( sum !=0)   return sum;
    else return -1;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}

