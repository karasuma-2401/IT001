/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/

#include <iostream>
using namespace std;
void inputMatrix(int a[][100], int &n);
void outputMatrix(int a[][100], int n);
int isArrangedmatrix (int a[][100], int n) ;
int main()
{
    int a[100][100];
    int n;
    inputMatrix(a,n);
    cout<<"Matrix: "<<endl;
    outputMatrix(a,n);
    if ( isArrangedmatrix (a,n) ==1)  cout <<"Elements in the same row are arranged";
}
void inputMatrix(int a[][100], int &n){
    cin >> n;
    for (int i =0; i < n; i++){
        for (int j =0; j < n; j++){
            cin >> a[i][j];
        }
    }
}
void outputMatrix (int a[][100], int n){
    for (int i =0; i < n; i++){
        for (int j =0; j < n; j++){
            cout << a[i][j] <<" ";
        }
        cout << endl;
    }
}
int isArrangedmatrix (int a[][100], int n){
    for (int i =0; i < n; i++){
        for (int j =0; j < n-1; j++){
            if ( a[i][j+1] < a[i][j])  return 0;
        }
    }
    return 1;
}

