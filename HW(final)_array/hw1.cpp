
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>

using namespace std;

void inputArray ( int a[], int &n){
    cin >> n;
    for ( int i =0; i < n; i++){
        cin >> a[i];
    }
}
void outputArray ( int a[], int n){
    for ( int i = 0; i < n; i++){
        cout << a[i] <<" ";
    }
}
int vitriMinDau ( int a[], int n){
    int min_val = 2e9;
    int index;
    for ( int i =0; i < n; i++){
        if ( a[i] < min_val){
            min_val = a[i];
            index =i;
        }
    }
    return index;
}
int vitriMinCuoi ( int a[], int n){
    int min_val = 2e9;
    int index;
    for ( int i =n-1; i >=0; i--){
        if ( a[i] < min_val){
            min_val = a[i];
            index =i;
        }
    }
    return index;
}
int main()
{
    int n, a[100];
    inputArray(a,n);
    cout<<"Array:"<<endl;
    outputArray(a,n);
    cout<<endl;


    cout<<"Vi tri phan tu nho nhat dau tien trong mang: " << vitriMinDau(a,n)<<endl;
    cout<<"Vi tri phan tu nho nhat cuoi cung trong mang: "<<vitriMinCuoi(a,n)<<endl;

    return 0;
}
