#include <iostream>
using namespace std;
int count_roundness ( int n){
    int count =0;
    while ( n %10 ==0){
        count++;
        n/=10;
    }
    return count;
}
int increaseRoundness( int n){
    int part_num = n;
    for ( int i = 1;i <= count_roundness(n); i++){
        part_num /=10;
    }
    int count =0;
    while ( part_num >= 10){
        int digit = part_num % 10;
        if ( digit == 0){
            return true;
        }
        part_num/=10;
    }
    return false;
}