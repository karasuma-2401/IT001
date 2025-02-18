#include <iostream>
#include <sstream>
using namespace std;
int main(){
    string s;
    getline (cin, s);
    stringstream ss (s);
    string word;
    int count =0;
    while (ss >> word){
        bool ok = true;
        for (int i =0; i < word.length(); i++){
            if ( isdigit(word[i]))  ok = false;
        }
        if (ok) count++;
    }
    cout << count;
}