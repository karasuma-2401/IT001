/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
string
###End banned keyword*/

#include <iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<cstdio>

using namespace std;
int check (char word){
    if (isalpha(word))  return 1;
    else if (isdigit(word))  return 2;
    else return 3;
}
int SoSanhBangNhauTheoChuCai ( char s[], char t[]){
    if ( strlen (s) != strlen(t))   return 0;
    for (int i =0; i < strlen(s); i++){
        if ( check(s[i]) == 1){
            if (islower(s[i]) && islower(t[i])) return 0;
            if (isupper(s[i]) && isupper(t[i])) return 0;
        }
        else if ( check(s[i]) ==2 && check(t[i]) != 2)   return 0;
        else if ( check(s[i]) == 3 && check(t[i]) != 3)   return 0;
    }
    return 1;
}
int main()
{
    char s[256], t[256];
    cin.getline(s,256);
    cin.getline(t,256);
    cout<<SoSanhBangNhauTheoChuCai(s,t);//chu cai giong nhau khac loai chu hoa va thuong, cung la so

    return 0;
}
