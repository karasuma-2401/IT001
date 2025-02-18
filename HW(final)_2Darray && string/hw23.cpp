#include <iostream>
#include <cstring>
using namespace std;
long long sum_digit(char s[]){
    long long sum =0;
    for ( int i =0; i < strlen(s); i++){
        sum+= s[i] - '0';
    }
    return sum;
}
int main(){
    char s[1001]; cin >> s;
    char ans[1001] ={0};
    long long first_sum = sum_digit(s);
    for ( int i =0; i < strlen(s); i++){
        char old_digit = s[i];
        for ( char new_digit = '9'; new_digit >= '0'; new_digit--){
            if (new_digit != old_digit){
                long long new_sum = first_sum - (old_digit -'0') + (new_digit -'0');
                if ( new_sum %3 ==0){
                    char s0[101];
                    strcpy (s0, s);
                    s0[i] = new_digit;
                    if ( strcmp(s0, ans) > 0)    strcpy (ans, s0);
                }
            }
        }
    }
    cout << ans;
} 