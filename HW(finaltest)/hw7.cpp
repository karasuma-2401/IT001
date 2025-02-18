#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double calculate ( int n){
	double sum =0;
	for ( double i =1; i <= n ; i++){
		sum = sqrt(sum+ i);
	}
	return sum;
}