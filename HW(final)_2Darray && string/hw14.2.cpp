#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[256];
    cin.getline (s,256);
    int count =0;
    int index =0;
    bool ok = true;
    for ( int i =0; i <= strlen(s); i++){
        if ( s[i] != ' ' && s[i] != '\0'){
            index ++;
            if ( isdigit(s[i])) ok = false;
        }
        else if ( index >0){
            if (ok) count++;
            index =0;
            ok = true;
        }
    }
    cout << count;
}
