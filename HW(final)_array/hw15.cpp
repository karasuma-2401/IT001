#include <iostream>
#include <math.h>
using namespace std;
int count[100000001] ={0};
int adder = 1e6;
void inputArray ( int a[], int &n){
    cin >> n;
    for ( int i =0; i < n; i++){
        cin >> a[i];
        count[a[i] + adder]++;
    }
}
void printArray ( int a[], int n){
    for ( int i =0; i < n; i++){
        cout << a[i] <<" ";
    }
    cout << endl;
}
void removeDups ( int a[], int n){
    for ( int i =0; i < n; i++){
        if ( count[a[i]+ adder] > 1 ){
            cout << a[i] << " ";
            count[a[i]+adder] =0;
        }
        else if ( count[a[i]+adder] ==1)  cout << a[i] << " ";
    }
}
int main()
{
    int a[100],n;
    inputArray(a,n);

    // In mang ban dau
    printArray(a, n);

    /* Goi ham thuc hien xuat mang nhung chi xuat nhung gia tri xuat hien lan dau tien,
    *  khong xuat nhung gia tri bi lap lai/bi trung
    */


    cout << "After removing the duplicate elements:" << endl;

    removeDups(a, n);

    return 0;
}
