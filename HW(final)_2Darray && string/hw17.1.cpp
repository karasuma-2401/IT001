#include <iostream>
#include <string.h>
using namespace std;
int myStrcmp(char s1[], char s2[]) {
    
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
    char temp[300];
    while (st[i] != '\0') {
        if (st[i] == ' ') {
            temp[j++] = st[i++];
            continue;
        }
        int wordLength = myStrlen(st, i);
        for (int k = 0; k < wordLength; k++) {
            temp[j + k] = st[i + wordLength - 1 - k];
        }
        j += wordLength;
        i += wordLength;
    }
    temp[j] = '\0';
    myStrcpy(st, 0, temp, 0);
    cout << st;
}
int main(){
    char s[300];
    cin.getline(s,300);
    if (s[0] == '\0'){
        cout << "Chuoi rong.";
        return 0;
    }
    StringReverse (s);
}