/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 16

void Nhapmang(int a[][MAX], int &n);
void Xuatmang(int a[][MAX], int n);

int F[100001];
void fibonacci ( int n){
    F[0] =0;
    F[1] = 1;
    for ( int i =2; i <= 100001;i++){
        F[i] = F[i-1]+ F[i-2];
    }
}
void Nhapmang(int a[][MAX], int &n){
    cin >> n;
    fibonacci (n);
    for ( int i =0; i < n;i++){
        for ( int j =0; j < n;j++){
            a[i][j] = F[i+j+1];
        }
    }
}
void Xuatmang(int a[][MAX], int n){
    for ( int i =0; i < n;i++){
        for ( int j =0; j < n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n, a[MAX][MAX];
	Nhapmang(a,n);
	Xuatmang(a,n);
	
    return 0;
}