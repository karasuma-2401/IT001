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

void DemTieng(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	cin.getline(s, 299);
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemTieng(s);
	return 0;
}
int myStrcmp(char s1[], char s2[]) {
    if (s2[0] == '\0') {
        if (s1[0] == '\0') 
            return 0;
        return 1;
    } else {
        int i;
        for (i = 0; s2[i] != '\0'; i++) {
            if (s1[i] != s2[i]) 
                return 0;
        }
        if (s1[i] != s2[i]) 
            return 0;
        return 1;
    }
}
void DemTieng(char s1[]){
    char listword[100][299];
    char currentword;
    int len = 0;
    int j = 0;
    int counts[100] = {0};
    for (int i = 0; s1[i] != '\0'; i++){
        currentword = s1[i];
        if (currentword == ' ') {
            if (j == 0) 
                continue;
            listword[len][j] = '\0';
            bool check = 1;
            for (int k = 0; k < len; k++) {
                if (myStrcmp(listword[k], listword[len])){
                    counts[k]++;
                    counts[len] = 0;
                    check = 0;
                    break;
                }
            }
            if (check == 1) 
                counts[len]++;
            len++;
            j = 0;
        } else {
            listword[len][j++] = currentword;
        }
    }
    if (j > 0) {
        listword[len][j] = '\0';
        bool check = 1;
        for (int k = 0; k < len; k++) {
            if (myStrcmp(listword[k], listword[len])){
                counts[k]++;
                counts[len] = 0;
                check = 0;
                break;
            }
        }
        if (check) 
            counts[len]++;
    }
    for (int i = 0; i <= len; i++) {
        if (counts[i] != 0) 
            cout << listword[i] << ": " << counts[i] << endl;
    }
}
