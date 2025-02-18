/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;

#define MAX 500

void Nhapmang(int a[], int &n);
void Xuatmang(int a[], int n);
long long TichSole_VTSNT(int a[], int n);


int main()
{
    int a[MAX], n;
    Nhapmang(a,n);
    if ( n<1) cout << "Mang rong." << endl;
    else{
        Xuatmang (a,n);
        cout << endl;
        if (TichSole_VTSNT(a,n) !=0)
            cout << "Tich cac so le o vi tri la so nguyen to la: " << TichSole_VTSNT(a,n) << endl;
        else cout << "Khong tim duoc so le o vi tri la so nguyen to, tich la: " << 0 << endl;
    }
}
void Nhapmang ( int a[], int &n){
    cin >> n;
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
}
void Xuatmang ( int a[], int n){
    for ( int i =0; i < n; i++){
        cout << a[i] <<" ";
    }
}
bool prime ( long long n){
    for ( int i =2; i*i <=n; i++){
        if ( n % i ==0)
            return false;
    }
    return n >1;
}
long long TichSole_VTSNT(int a[], int n){
    long long time =1;
    bool ok = false;
    for ( int i =0; i < n; i++){
        if ( prime(i) && a[i] % 2){
            time*= a[i];
            ok =true;
        }
    }
    if (ok) return time;
    else return 0;
}