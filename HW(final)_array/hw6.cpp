/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100


void NhapmangSNT(int a[], int &n);
int SoPhanTuChuaY(int a[], int n,int y);

bool prime ( int n){
	for ( int i =2; i*i <= n;i++){
		if ( n % i ==0)
		return false;
	}
	return n > 1;
}
void NhapmangSNT ( int a[], int &n){
	cin >> n;
	int index = 0;
	for ( int i = 2; index < n ;i++){
		if ( prime(i))
			a[index ++] = i;
	}
}
int SoPhanTuChuaY(int a[], int n,int y){
	int count =0;
	for ( int i =0; i <n;i++){
		int tmp = a[i];
		while (tmp !=0){
			int digit = tmp %10;
			if ( digit == y){
				count ++;
				break;
			}
		tmp/=10;
		}
	}
	return count;
}
int main()
{
	int a[MAX], n, y;
	cin >>y;
	NhapmangSNT(a,n);
	cout << SoPhanTuChuaY(a, n, y) << endl;;
	return 0;
}