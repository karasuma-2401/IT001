#include <iostream>
using namespace std;
bool prime ( int n){
    for ( int i =2; i*i <= n; i ++){
        if ( n % i ==0)
            return false;
    }
    return n>1;
}
bool composite_num (int n){
    for ( int i =2; i*i <= n; i ++){
        if ( n % i ==0)
            return true;
    }
    return n >1;
}
int main(){
    int n; cin >> n;
    if (prime(n))   cout << 1;
    else if (composite_num(n))  cout << 0;
    else cout << -1;
}