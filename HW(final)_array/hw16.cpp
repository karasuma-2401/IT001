#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, k; cin >> n >> k;
    long long a[n];
    long long rewards[n+10];
    rewards[0] = 0;
    for ( int i =1; i <= n; i++){
        cin >> a[i];
        rewards[i] = rewards[i-1] + a[i];
    }
    long long before[n+10] = {0}, after[n+10] = {0};
    for ( int i = k; i <= n-k+1 ; i++){
        before[i] = max (before[i-1], (rewards[i] - rewards[i-k]));
    }
    for ( int i = n -k +1; i >=k+1; i--){
        after[i] = max ( after[i+1], rewards[i + k -1] - rewards[i -1]);
    }
    long long min_val = 2e18;
    for ( int i =1; i <= n-k+1; i++){
        long long max_option = max( before[i-1], after[i+k]);
        min_val = min ( min_val, max_option);
    }
    cout << min_val;
}