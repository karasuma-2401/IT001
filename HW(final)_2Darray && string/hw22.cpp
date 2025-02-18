/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
###End banned keyword*/
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
    char s1[101],  s2[101];
    cin.getline (s1, 101);
    cin.getline ( s2, 101);
    int count[256]={0};
    for ( int i =0; i < strlen(s1); i++){
        count[s1[i]]++;
    }
    for (int i =0; i < strlen(s2); i++){
        count[s2[i]]--;
    }
    bool ok = true;
    for ( int i =0; i < 256; i++){
        if ( count[i] !=0){
            ok =false;
        }  
    }
    if (ok) cout << "YES";
    else cout << "NO";
}

