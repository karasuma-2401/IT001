#include <iostream>
using namespace std;
bool prime ( int n){
    for ( int i =2; i*i <=n; i++){
        if ( n % i ==0)
            return false;
    }
    return n >1;
}
int main(){
    int n; cin >> n;
    int a[n];
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    bool ok = false;
    long long sum =0;
    for ( int i =0; i < n; i++){
        if ( prime(a[i])){
            ok = true;
            sum+= a[i];
        }
    }
    if ( !ok)   cout << "Khong co so nguyen to" << endl;
    else{
        bool check = false;
        for ( int i =0; i < n; i++){
            if ( prime(a[i]) && sum % a[i] ==0)
            check = true;
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}