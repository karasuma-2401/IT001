#include <iostream>
using namespace std;
int main(){
    int n; cin >> n; 
    int a[n];
    bool ok = false;
    int max_negative =-2e9;
    for ( int i =0; i < n; i++){
        cin >> a[i];
        if ( a[i] <0)   ok = true;
        if ( a[i] < 0 && a[i] > max_negative)
            max_negative =a[i];
    }
    if (ok){
        for ( int i =0; i < n; i++){
        if ( a[i] == max_negative){
            cout << i;
            break;
        }
        }
    }
    else cout << -1;  
}