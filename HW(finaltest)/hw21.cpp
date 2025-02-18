#include <iostream>
using namespace std;

int gcd ( int a, int b){
    while ( b !=0){
        int tmp = a % b;
        a =b; 
        b = tmp;
    }
    return a;
}
int count_action ( int a, int b, int c, int d){
    int count =0;
    bool ok = true;
    if (a > b || c > d || gcd(a,b) !=1 || gcd (c,d)!=1) return 0;
    else {
        while (ok){
            if ( a == c && b == d)  ok = false;
            else{
                a++; b++;
                int x =a, y =b;
                a/= gcd(x,y);
                b/=gcd (x,y);
                count++;
                if ( count > 1e6)   return 0;
            }
        }
    }
    return count;
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << count_action ( a,b,c,d) << endl;
}