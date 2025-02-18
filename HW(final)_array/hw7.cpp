#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    int count_up =0, count_down =0, count_stable =0;
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
    if ( n ==1) cout << "Mang tang dan";
    else{
            for ( int i =1; i < n; i++){
            if ( a[i] > a[i-1]) count_up++;
            else if ( a[i] < a[i-1])  count_down++;
            else count_stable++;
        }
        if ( count_stable >=1 || (count_up !=0 && count_down !=0)) cout <<  "Mang khong tang, khong giam" << endl;
        else if ( count_up ==0) cout << "Mang giam dan" << endl;
        else if ( count_down ==0) cout << "Mang tang dan" << endl;
    }
}