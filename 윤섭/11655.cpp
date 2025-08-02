#include <iostream>
using namespace std;

int main() {
    char s[101];
    cin.getline(s, 101);  

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];
        if (c >= 'a' && c <= 'z') {      
            c = (c - 'a' + 13) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z') { 
            c = (c - 'A' + 13) % 26 + 'A';
        }
        cout << c;
        
    }
}
