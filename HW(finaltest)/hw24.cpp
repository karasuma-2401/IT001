#include <iostream>
using namespace std;
int main(){
    long a,b,c,d,k;
    cin >> a>> b >> c >> d >> k;
    for(long i=d;i>=c;i--){
        long j=(b+d)/k*k-i;
        if (j <=b && j >= a){
            cout<< j <<" "<< i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}