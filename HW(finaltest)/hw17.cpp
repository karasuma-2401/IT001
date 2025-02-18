#include <iostream>
using namespace std;
int digit (int n){
    int count =0;
    while ( n !=0){
        count++;
        n/=10;
    }
    return count;
}
int check_sum ( int n){
    int count =0;
    while ( n >=10){
        n--;
        count ++;
    }
    return count;
}
int coupons_two ( int n){
    int first = n /10,
        last = n % 10;
    if ( first >= last){
        if ( first == 1){
            return first*1000+ last;
        }
        else {
            if ( last ==1)  return 1000+ first;
            else if ( last ==0) return 1000+ (first -1)*100;
            else {
                return 1000 + (last -1)*100 + first;
            }
        }
    }
    else return 0;
}
int coupons_three ( int n){
    int couple1 = n /10;
    if ( couple1 <=18 && couple1 >=10){
        int first = check_sum(couple1);
        int second = couple1 - first;
        if ( n %100 > 1){
            int third = 1 ;
            int four = ( n%10) - 1;
            return third*1000+ four*100 + first*10+second;
        }
        else if ( n %100 ==1){
            return 1000+ first*10 + second;  
        }
        else if ( n %100 ==0){
            return first*1000 + second*100;
        }
    }
    return 0;
}
int coupons_four ( int n){
    int couple1 = n / 100,
        couple2 = n % 100;
    if ( couple1 <=18 && couple1 >= 10){
        if ( couple2 <=18 && couple2 >=10){
            int first = check_sum(couple1);
            int second = couple1 - first;
            int third = check_sum(couple2);
            int four = couple2 - third;
            if ( (first*10+ second) <= (third*10+four) ){
                return first*1000 + second*100 + third*10+ four;
            }
            else {
                return third*1000 + four*100 + first*10 + second;
            }
        }
        else if ( couple2 <10){
            int first = check_sum(couple1);
            int second = couple1 - first;
            if ( couple2 ==1){
                return 1000 + first*10+ second;
            }
            else if ( couple2 ==0){
                return first*1000 + second*100;
            }
            else {
                return 1000+ (couple2 -1)*100 + first*10 + second;
            }
        }
        else return 0;
    }
    else return 0;
}
int main(){
    int n; cin >> n;
    if ( digit(n) == 2) cout << coupons_two(n);
    else if ( digit(n) ==3) cout << coupons_three(n);
    else if ( digit (n) == 4)   cout << coupons_four(n);
    else return 0;
}