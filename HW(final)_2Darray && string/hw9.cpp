/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
strlen
strcat
string
strcmp
strcpy
memmove
strstr
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int main(){
    char s[MAX];
    cin.getline (s, MAX);
    bool ok = true;
    for (int i =0; s[i] != '\0'; i++){
        if ( s[i] >='0' && s[i] <='9')
            ok = false;
    }
    if (ok) cout << s;
    else cout << "CHUOI KHONG HOP LE.";
}