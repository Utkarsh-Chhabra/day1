#include <iostream>
using namespace std;

int main() {

    char ch;
    count << "Enter a character: ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel." << endl;
    }
    
    else {
        cout << ch << " is a consonant." << endl;
    }

    return 0;
}