#include <iostream>
#include <cmath>
using namespace std;
bool isPower ( int n){
    if ( n ==1) return true;
    else {
        for ( int i=  2; i <=20; i++){
            for ( int j =2; j <=10; j ++){
                if ( pow(i,j) == n){
                    return true;
                }
            }
        }
        return false;
    }
}