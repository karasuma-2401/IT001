#include <iostream>
using namespace std;
#define MAX 300

int Fibo(int);

int main()
{
	int x;
	cin >> x;
	if (x < 1 || x>30)
		cout << "So " << x << " khong nam trong khoang [1,30]." << endl;
	else
	{
		cout << Fibo(x) << endl;
	}
	return 0;
}

int Fibo(int x){
    int fibo[31];
	fibo[0] =0;
	fibo[1] =1;
	for ( int i =2; i <= 30; i++ ){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	return fibo[x];
}
