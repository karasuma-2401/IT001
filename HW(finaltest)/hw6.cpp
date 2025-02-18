#include <iostream>
using namespace std;
int main(){
    long long n; cin >> n;
    long long gt =1;
    if ( n % 2==0){
        for ( int i =2; i <= n; i+=2){
            gt *= i;
        }
    }
    else for ( int i =1; i <= n; i+=2){
            gt *= i;
        }
    cout << gt;
}