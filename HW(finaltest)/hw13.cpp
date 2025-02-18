#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double a;
    int n;
    cin >> a >> n;
    double tmp = a*n;
    if((int)((tmp - (int)tmp)*10) >=5)  tmp = (int)tmp +1;
    else tmp = (int)tmp;
    cout << setprecision(10) << (double) tmp / n;
}
