/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
using namespace std;
#define MAX 1000
void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n);
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b);
bool prime ( int n){
    for (int i =2; i*i <=n ;i++){
        if ( n % i ==0) 
            return false;
    }
    return n >1;
}
void input(unsigned int arr[][MAX], unsigned int &m, unsigned int &n){
    cin >> m >> n;
    for (int i =0; i <m; i++){
        for ( int j =0; j < n; j++){
            cin >> arr[i][j];
        }
    }
}
unsigned int countPrimeInAB(unsigned int arr[][MAX], unsigned int m, unsigned int n, unsigned int a, unsigned int b){
    int count =0;
    for (int i =0; i <m; i++){
        for ( int j =0; j < n; j++){
            if ( arr[i][j] >= a && arr[i][j] <= b){
                if (prime(arr[i][j])) count ++;
            }
        }
    }
    return count;
}
int main()
{
    unsigned int a;
    unsigned int b;
    unsigned int arr[MAX][MAX];
    unsigned int m;
    unsigned int n;
    


    cin >> a >> b;
    input(arr, m, n);
    unsigned int res = countPrimeInAB(arr, m, n, a, b);
    cout << res;

    return 0;
}