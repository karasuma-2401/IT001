/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
###End banned keyword*/
#include <iostream>
#include <string.h>
using namespace std;
void reverse (char *s1, char *s2){
    while (s1 < s2){
            swap(*s1, *s2);
            s1++;
            s2--;
    }
}
int main(){
    char s[1000];
    cin.getline(s, 1000);
    if ( s[0] == '\0'){
        cout << "Chuoi rong.";
        return 0;
    }
    char *start = s;
    char *end = s;
    while ( *end != '\0'){
        if ( *end == ' '){
            reverse (start, end -1);
            start = end +1;
        }
        end++;
    }
    reverse (start,end-1);
    cout << s;
}
