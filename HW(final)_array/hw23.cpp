#include <iostream>
#include <cstring>
using namespace std;
char book[10001][251];  
int main() {
    char keyword[201];      
    int count = 0;
    while (true) {
        cin.getline(book[count], 251);  
        if (strcmp(book[count], ".") == 0) 
            break;
        count++;
    }
    cin.getline(keyword, 201);
    char keyword_lower[201];
    for (int i = 0; i < strlen(keyword); i++) {
        keyword_lower[i] = tolower(keyword[i]);
    }
    keyword_lower[strlen(keyword)] = '\0';
    for (int i = 0; i < count; i++) {
        char book_lower[251];
        for (int j = 0; j < strlen(book[i]); j++) {
            book_lower[j] = tolower(book[i][j]);
        }
        book_lower[strlen(book[i])] = '\0';
        if (strstr(book_lower, keyword_lower) != NULL) {
            cout << book[i] << endl; 
        }
    }
}
