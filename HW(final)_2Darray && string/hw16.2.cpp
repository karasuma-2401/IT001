#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s1[1000];
    char s2[50];
    cin.getline (s1, 1000);
    cin.getline (s2, 20);
    char *token = strtok (s1,s2);
    while (token != nullptr){
        cout << token << endl;
        token = strtok (nullptr, s2);
    }
}