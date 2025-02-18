#include <iostream>
using namespace std;
int GCD ( int a, int b){
    while ( b !=0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int main(){
    int all_hour, all_minutes, all_sec;
    cin >> all_hour>> all_minutes>> all_sec;
    int watch_hour, watch_minutes, watch_sec;
    cin >> watch_hour>> watch_minutes>> watch_sec;
    long long sum_all = all_hour*3600 + all_minutes*60+ all_sec;
    long long sum_watch = watch_hour*3600 + watch_minutes*60+ watch_sec;
    int gcd = GCD (sum_all, sum_watch);
    sum_all /= gcd;
    sum_watch/= gcd;
    cout << sum_watch << " "<< sum_all;
}