#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
    char s[200001]; 
    cin.getline(s,200001);
    int n = strlen(s);
    char s0[200001];
    int l =0, r = n -1;
    if ( n% 2==0){
        for ( int i = n-1; i >=0; i--){
            if ( i % 2==0)  s0[l++] = s[i];
            else s0[r--] = s[i]; 
        }
    }
    else{
        for ( int i = n-1; i >=0; i--){
            if ( i % 2==1)  s0[l++] = s[i];
            else s0[r--] = s[i]; 
        }
    }
    cout << s0;
}
