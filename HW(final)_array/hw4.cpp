#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n; cin >> n;
    double a[n];
    double mean_num =0;
    for ( int i =0; i < n; i++){
        cin >> a[i];
        mean_num += a[i];
    }
    mean_num /= n;
    double deviation =0;
    for ( int i =0; i < n; i++){
        deviation += pow(a[i]-mean_num,2);
    }
    double perfect_deviation = sqrt( deviation/n);
    cout << setprecision(10) << perfect_deviation << endl;

}