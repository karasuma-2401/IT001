#include <iostream>
using namespace std;
int count[1000001] ={0};
int adder = 1e6;
int main(){
    int n; cin >>n;
    int a[n];
    int max_val = -2e9, min_val = 2e9;
    for ( int i =0; i < n; i++){
        cin >> a[i];
        count[a[i]+ adder]++;
        if ( a[i] > max_val)    max_val = a[i];
        if ( a[i] < min_val)  min_val = a[i];
    }
    int count_add =0;
    for ( int i = min_val; i <= max_val; i++){
        if ( count[i+ adder] ==0)  count_add++;
    }
    cout << count_add;
}