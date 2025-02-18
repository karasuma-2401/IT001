#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int leap(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}
bool dayinmonth(int year, int month, int day) {
    if (month < 1 || month > 12 || day < 1) return false;
    int thang[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (leap(year)) thang[2] = 29;
    return day <= thang[month];
}
int check(char a[], char valid_date[][9]) {
    int count = 0;
    do {
        int year = stoi(string(a, 4)); 
        int month = stoi(string(a + 4, 2)); 
        int day = stoi(string(a + 6, 2)); 

        if (year > 0 && dayinmonth(year, month, day)) {
            memcpy(valid_date[count], a, 8);
            valid_date[count][8] = '\0';  
            count++;
        }
    } while (next_permutation(a, a + 8)); 
    return count;
}
int main() {
    char date[11];
    cin.getline(date, 11);  
    char a[9] = {0};
    int index = 0;
    for (int i = 0; date[i] != '\0'; i++) {
        if (date[i] != ' ') {
            a[index++] = date[i];
        }
    }
    sort(a, a + 8);
    char valid_date[50000][9];
    int result = check(a, valid_date);
    cout << result << endl;
    for (int i = 0; i < result; i++) {
        for (int j = 0; valid_date[i][j] != '\0'; j++) {
            cout << valid_date[i][j];
            if (j == 3 || j == 5) cout << " ";
        }
        cout << endl;
    }
}
