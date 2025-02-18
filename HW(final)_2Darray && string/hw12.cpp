/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
class
string
###End banned keyword*/

#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa (char *s){
    int start = 0,end = strlen(s) - 1;
    while (s[start] == ' ') start++;
    while (s[end] == ' ')   end--;
    char temp[10000];
    int j = 0;
    for (int i = start; i <= end; i++)  temp[j++] = s[i];
    temp[j] = '\0'; 
    strcpy(s,temp);
    s[0] = toupper(s[0]);
    for (int i =1; s[i] != '\0'; i++){
        if (isalpha(s[i]) && s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
        else s[i] = tolower(s[i]);
    }
}

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}

