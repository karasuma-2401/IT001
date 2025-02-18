/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void DemKyTu(char s[]) {
	int freq[256] = {0};
	for (int i = 0; i < strlen(s); i++) {
		freq[(unsigned char)s[i]]++;
	}
	for ( int i =0; i <strlen(s); i++){
		if ( freq[s[i]] > 0){
			cout << s[i] << ": " <<freq[s[i]] << endl;
			freq[s[i]] = 0;
		}
	}
}
int main(){
    char s[300]; 
    cin.getline(s, 300);
    if (s[0] == '\0'){
        cout << "Chuoi rong.";
        return 0;
    }
    DemKyTu(s);
}
