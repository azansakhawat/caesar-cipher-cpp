//Encryption: method of protecting data by converting it into a secret code
//Decryption: process of converting encrypted (coded) data back into its original readable form using a key
#include <iostream>
using namespace std;

int main() {

    string text;     // message to encrypt
    int key;         // number of shifts

    cout << "Enter your message: ";
    cin >> text;     // take message from user

    cout << "Enter key (number): ";
    cin >> key;      // how many letters to shift

    string encrypted = "";
    string decrypted = "";

    // ----------- ENCRYPTION -----------
    for (int i = 0; i < text.length(); i++) {

        char ch = text[i];   // take one character

        // shift the character forward
        char newChar = ch + key;

        encrypted += newChar;   // add shifted character to encrypted text
    }

    cout << "Encrypted Message: " << encrypted << endl;

    // ----------- DECRYPTION -----------
    for (int i = 0; i < encrypted.length(); i++) {

        char ch = encrypted[i];

        // shift the character backward
        char original = ch - key;

        decrypted += original;
    }

    cout << "Decrypted Message: " << decrypted << endl;

    return 0;
}

