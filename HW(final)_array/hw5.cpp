
/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <math.h>
using namespace std;
int count_digits ( int n){
    int count =0;
    while ( n !=0){
        count++;
        n/=10;
    }
    return count;
}
int ham_x ( int a[], int n){
    long long sum =0;
    for ( int i =0; i < n; i++){
        if ( a[i] >0)   sum+= count_digits(a[i]);
        else{
            sum++;
            sum+= count_digits(a[i]);
        }
    }
    return sum;
}
int a[1000000];
int main()
{
    int n, dem = 0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    cout << ham_x(a,n);

    return 0;
}
