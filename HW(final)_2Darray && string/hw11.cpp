#include <iostream>
#include <cstring>
using namespace std;
#define MAX 300

void erase ( char s1[], int k){
	for (int i = k; i < strlen(s1); i++){
		s1[i] = s1[i+1];
	}
}
void insert ( char s1[], int k){
	for (int i = strlen(s1); i >= k; i--){
		s1[i+1] = s1[i];
	}
	s1[k] = ' ';
}
void Chuanhoa (char s1[]){
	for (int i =0; s1[i] != '\0'; i++){
        if ( s1[i] == '.'){
            while (i > 0 && s1[i-1] == ' '){
                erase (s1,i-1);
                i--;
            }
            while (s1[i+1] == ' ' && s1[i+1] != '\0'){
            	erase (s1,i+1);
            }
        }
    }
	for ( int i =0; i < strlen(s1); i++){
		if ( s1[i] == '.' && s1[i+1] != '\0' && s1[i + 1] != ' '){
			insert(s1,i+1);
		}
	}
}
int main(){
    char s[MAX];
	cin.getline(s, 299);

	char s1[MAX];
	strcpy(s1, s);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}
