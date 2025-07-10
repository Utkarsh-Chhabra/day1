#include <iostream>
using namespace std;

int main() {
    
    char character;
    cout << "Enter a character: ";
    cin >> character;  
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z')) {
        cout << character << " is an alphabet." << endl;
    } else if (character >= '0' && character <= '9') {
        cout << character << " is a digit." << endl;
    } else {
        cout << character << " is a special character." << endl;
    }

    return 0;
}