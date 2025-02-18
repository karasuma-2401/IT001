#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string num1, num2;
    long long lenga, lengb, count;
    getline (cin, num1);
    getline (cin, num2);
    lenga = num1.size();
    lengb = num2.size();
    count = lengb; 
    if (lenga == lengb){
        count = 0;
        while (count < lenga && num1[count] == num2[count]){
            count++;
        }
        count = lenga - count;
    }
    cout << count << endl;
}
