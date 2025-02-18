#include <iostream>
#include <iomanip>
using namespace std;
bool nice_num (int n){
    for ( int i =2; i*i <= n; i++){
        if ( n % (i*i) ==0){
            return false;
        }
    }
    return true;
}
int gcd( int a, int b){
    while ( b !=0){
        int tmp =a %b ;
        a =b; 
        b = tmp;
    }
    return a;
}
int main(){
	int x,y; cin >> x >> y;
    int index =0;
    int check[1001];
    for ( int i = x; i<=y; i++){
        if (nice_num(i)){
            check[index++] = i;
        }
    }
    int count =0;
    for ( int i =0; i < index; i++){
        for ( int j = i+1; j< index; j ++){
            int a = check[i];
            int b = check[j];
            if (gcd (a,b) ==1){
                count++;
            }
        }
    }
    cout << count;
}