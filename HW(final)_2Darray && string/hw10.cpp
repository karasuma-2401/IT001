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
#include <string>
using namespace std;
#define MAX 255

int myStrlen(char s[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s1[MAX], s2[MAX];
	cin.getline(s1, 254);
	cin.getline(s2, 254);
	bool kt = myStrcat(s1, s2);
	if (kt){
		for (int i =0; i < myStrlen(s1); i++)
			cout << s1[i];
		for (int i =0; i < myStrlen(s2); i++)
			cout << s2[i];
	}
	else cout << "Khong noi duoc. Khong du bo nho.";
}
int myStrlen (char s[]){
	int k =0;
	for (int i =0; s[i] != '\0';i++){
		k++;
	}
	return k;
}
bool myStrcat (char s1[], char s2[]){
	if ( myStrlen(s1) > 255|| myStrlen(s2) > 255 || myStrlen(s1) + myStrlen(s2) > 255)
		return false;
	return true;
	
}

