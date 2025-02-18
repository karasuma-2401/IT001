#include <iostream>
using namespace std;
long long twopoint_trapping_rain( int n){
    int a[1000001];
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    unsigned long long sum =0;
    int l =0, r = n -1;
    int start_max = -1, end_max =0;
    while ( l <= r){
        if ( a[l] <= a[r]){
            if ( a[l] >= start_max){
                start_max = a[l];
            }
            else{
                sum+= start_max - a[l];
            }
            l++;
        }
        else{
            if ( a[r] >= end_max){
                end_max = a[r];
            }
            else {
                sum+= end_max - a[r];
            }
            r--;
        }
    }
    return sum;
}
int main(){
    int n; cin >> n;
    cout << twopoint_trapping_rain(n);
}