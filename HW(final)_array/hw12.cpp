#include <iostream>
using namespace std;
bool prime ( int n){
    for ( int i =2; i*i <= n; i++){
        if ( n % i ==0)
            return false;
    }
    return n >1;
}
int main()
{
    int n;    cin >> n;
    int a[n+1];
    for ( int i =0; i <n; i++){
        cin >> a[i];
    }
    for ( int i =0; i < n; i++){
        if ( prime(a[i])){
            int index =i;
            for ( int j = n; j > index; j--){
                a[j] = a[j-1];
            }
            a[index] = -1;
            n++;
            i++;
        }
    }
    for ( int i =0; i <n; i ++){
        cout << a[i] << " ";
    }
    cout << endl;
    for ( int k = 1; k < n; k++){
        if ( prime(a[k]) && a[k-1] ==-1)    cout << k - 1 << " ";
    }
}