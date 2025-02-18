#include <iostream>
using namespace std;
void tamGiacCan_8(){
    long long n; cin >> n;
    if ( n >=3 && n <=10){
        for (int i = 1; i <=n; i++) {
            for (int j = 1; j <=n; j++) {
                if ( j == n || j == n-i+1){
                    cout << "*" << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
        for (int i = 1; i <=n-1; i++) {
            cout << " ";
            for (int j = 1; j <=n-1; j++) {
                if ( j== i || j == n-1){
                    cout << " "<< "*";
                }
                else cout << "  ";
            }
            cout << endl;
        }
    }
    else cout << "Khong thoa dieu kien nhap.";
}
int main(){
    tamGiacCan_8();
    return 0;
}
