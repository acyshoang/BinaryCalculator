#include <iostream>
#include <string>

using namespace std;

// Convert Binary To Octal

string BinToOctal()
{
    string num;
    cout << "Enter Binary Number: ";
    cin >> num;
    string octal = "";
    int digitCount = 0, group = 0;
    for (int i = num.size() - 1; i > -1; i--)
    {
        group += (num[i] - '0') * (1 << digitCount); // 0x2^digitCount
        digitCount++; // Counting numbers for the pow
        if (digitCount == 3 || i == 0)
        {
            octal = to_string(group) + octal; // Merge the octal
            group = 0; // After merge set this and the one below to 0 for the new value
            digitCount = 0;
        }
    }
    cout << "Octal: " << octal << endl;
    return octal;
}

string BinToDec(){
    string num;
    cout << "Enter Binary Number: ";
    cin >> num;
    string dec = "";
    int digitCount = 0, group = 0;
    for (int i = num.size() - 1; i > -1; i--){
        digitCount++;
        group += (num[i] - '0') * (1 << digitCount); // 0x2^digitCount
        if (digitCount == 3 || i == 0){
            dec = to_string(group) + dec;
            group = 0; // After merge set this and the one below to 0
            digitCount = 0;
        }
    }

    cout << "Decimal: " << dec << endl;
    return dec;
}

string BintoHex(){

}

int main(){
    BinToOctal();
    return 0;
}