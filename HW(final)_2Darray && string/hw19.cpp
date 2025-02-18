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

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	cin.getline(s,MAX);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}
int myStrcmp(char s1[], char s2[]) {
    if (s1[0] == '\0')
		return 0;
	return 1;
}
int myStrlen(char s[], int k) {
	int p = 0;
    for (int i = k; s[i]!=' '; i++){
		if(s[i]=='\0')break;
		p++;	
	}
	return p;
}
void myStrcpy(char s[], int vt, char s1[], int k) {
    int i = 0;
    while (s1[k] != '\0' ) {
        s[vt + i] = s1[k];
        i++;
        k++;
    }
    s[vt + i] = '\0';
}
void StringReverse(char st[]) {
    int i = 0, j = 0;
    char temp[MAX];
    while (st[i] != '\0') {
        if (st[i] == ' ') {
            temp[j++] = st[i++];
            continue;
        }
        int length = myStrlen(st, i);
        for (int k = 0; k < length; k++) {
            temp[j + k] = st[i + length - 1 - k];
        }
        j += length;
        i += length;
    }
    temp[j] = '\0';
	char tempp[j];
	for(int i=0;i<j;i++){
		tempp[j-i-1]=temp[i];
	}
	tempp[j]='\0';
    myStrcpy(st, 0, tempp, 0);
}
