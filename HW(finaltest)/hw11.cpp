#include <iostream>
using namespace std;
int main(){
    int min1, min2_10, min11, s; 
    cin >> min1 >> min2_10 >> min11 >> s;
    int s1, s2 =0, s3 =0;
    if (  s >= min1 && s >= 2000 && s<=60000){
        s = s - min1;
        s1 =1;
        if ( s >= min2_10){
            int tmp  = s/min2_10;
            if ( tmp <= 9){
                s2 = tmp;
                cout << s1 +s2;
            }
            else {
                s = s - 9*min2_10;
                s2 =9;
                s3 = s/ min11;
                cout << s1 + s2 + s3;
            }
        }
        else cout << 1;
    }
    else cout << 0;
}