#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s1, s2;
    getline (cin, s1);
    getline (cin, s2);
    for (int i =0; i < s1.length(); i++){
        for (int j =0; j < s2.length(); j ++){
            if ( s1[i] == s2[j]){
                s1[i] = s2[0];
            }
        }
    }
    for (int i =0; i < s1.length(); i++){
        if ( s1[i] == s2[0] && s1[i+1] == s2[0]) 
        s1.erase(i,1);
    }
    stringstream ss (s1);
    string word;
    while (getline(ss, word, s2[0])){
        cout << word << endl;
    }
}
