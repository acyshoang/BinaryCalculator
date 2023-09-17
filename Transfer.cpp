#include <iostream>
#include <string>

using namespace std;

// ---------------------------------------------------------------- Nhi Phan -> Bat Phan

string BinaryToOctal(){
    string binary;
    cout << "Enter binary numbers: " << endl;
    cin >> binary;
    string octal = "";
    int group = 0, digitCount = 0;
    for (int i = binary.length() - 1; i > -1; --i) {
        group += (binary[i] - '0') * (1 << digitCount);
        ++digitCount;
        if (digitCount == 3 || i == 0) {
            octal = to_string(group) + octal;
            group = 0;
            digitCount = 0;
        }
    }
    
    return octal;
}

// ================================================================= Nhi Phan -> Thap Phan

string BinarytoDecimal() {
    string binary;
    cout << "Enter binary numbers: " << endl;
    cin >> binary;
    string decimal = "";
    int group = 0, digitCount = 0;
    for (int i = binary.length() - 1; i > -1; --i) {
        group += (binary[i] - '0') * (1 << digitCount);
        ++digitCount;
        if (digitCount == 4 || i == 0) {
            decimal = to_string(group) + decimal;
            group = 0;
            digitCount = 0;
        }
    }
    cout << "decimal: " << decimal << endl;
    return decimal;
}
// ================================================================= Nhi Phan -> Thap Luc Phan
string BinarytoHexa() {
    string binary;
    cout << "Enter binary: " << endl;
    cin >> binary;
    char A, B, C, D, E, F;
    string hexadecimal = "";
    int group = 0, digitCount = 0;
    for (int i = binary.length() - 1; i > -1; --i) {
        group += (binary[i] - '0') * (1 << digitCount);
        ++digitCount;
        if (digitCount == 4 || i == 0) {
            if (group < 10) {
                hexadecimal = to_string(group) + hexadecimal;
            }
            else {
                hexadecimal = static_cast<char>('A' + group - 10) + hexadecimal;
            }
            group = 0;
            digitCount = 0;
        }
    }
    cout << "Hexadecimal: " << hexadecimal << endl;
    return hexadecimal;
}

// ================================================================= Menu Binary

void binConvertMenu(){
    int options;
    cout << "Choose coefficient to converrate" << endl;
    cout << "1. Binary to octal" << endl;
    cout << "2. Binary to decimal" << endl;
    cout << "3. Binary to Hexadecimal" << endl;
    cout << "Your options: ";
    cin >> options;
    switch (options)
    {
    case 1:
        BinaryToOctal();
        break;
    default:
        break;
    }
}
//101011101

int main(){
    BinarytoHexa();

    return 0;
}