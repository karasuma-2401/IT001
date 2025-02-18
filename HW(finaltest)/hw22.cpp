#include <iostream>
#include <iomanip>
using namespace std;
void minimize(double &x) {
    while (x > 200) x /= 3.0; 
}
void check_monthand_leapfrogging (int &month, int &year){
    if (month >=5 && month <12) month = 5;
    else if ( month >=1 && month <=4){
        year--;
        month = 12;
    }
}
int main(){
    double x;
    int m1, y1, m2,y2;
    cin >> x >> m1 >> y1 >> m2 >> y2;
    check_monthand_leapfrogging (m1,y1);
    check_monthand_leapfrogging (m2,y2);
    int space_months = (y2 -y1)*12 + (m2- m1);
    while ( space_months >= 0){
        if (m1 == 5){
            x*=2;
            minimize(x);
            space_months-=7;
            m1+=7;
            continue;
        }
        if (m1 ==12){
            x++; 
            space_months-=5; 
            m1-=7;
            minimize(x);
            continue;  
        }
    }
    cout << fixed << setprecision(2) << x; 
}