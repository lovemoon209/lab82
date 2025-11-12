#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void CapitalizeAfterDot(string &s) {
    bool afterDot = true; 

    for (size_t i = 0; i < s.length(); i++) {
        if (afterDot && isalpha((unsigned char)s[i])) {
            s[i] = toupper((unsigned char)s[i]);
            afterDot = false; 
        } 
        else if (s[i] == '.') {
            afterDot = true; 
        } 
        else if (!isspace((unsigned char)s[i]) && ispunct((unsigned char)s[i]) == 0) {
            afterDot = false; 
        }
    }
}

int main() {
    string text;
    cout << "start: ";
    getline(cin, text);

    CapitalizeAfterDot(text);

    cout << "result: " << text << endl;

    return 0;
}
