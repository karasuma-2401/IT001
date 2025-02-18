#include <iostream>
using namespace std;
int main(){
double x,y,z, max_val,min_val; cin >> x >> y >> z;
    if ( x > y){
        if ( x > z) max_val = x;
        else max_val = z;
        if ( z > y )    min_val = y;
        else min_val = z;
    }
    else {
        if ( y > z) max_val = y;
        else max_val = z;
        if ( z > x) min_val = x;
        else min_val = z;
    }
    cout << min_val << " "<< x+y+z - (max_val + min_val) << " "<< max_val;
    return 0;
}