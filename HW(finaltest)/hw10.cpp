#include <iostream>
using namespace std;
bool symmertrical ( long long n){
    long long res =0, source = n;
    while ( n !=0){
        int digit = n %10;
        res = res*10 + digit;
        n/=10;
    }
    return res == source;
}
int main(){
    long long n; cin >> n;
    if ( !symmertrical(n))  cout << 1;
    else cout << 0;  
}