#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int k; cin >>k;
    cin.ignore();
    char s[10000];
    cin.getline(s,10000);
    k = k % 26; 
    for (int i = 0; i < strlen(s); i++){
        if (isalpha(s[i])){  
            int offset = (s[i] - 'A' + k) % 26;
            s[i] = 'A' + offset;
        }
    }
    cout << s;
}
