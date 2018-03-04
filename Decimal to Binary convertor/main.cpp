#include <iostream>
#include<string>
#include <cmath>
using namespace std;

// function to convert decimal to binary
void decimalToBinary(int n) {
    // array to store binary number
    int binaryNum[1000];
    cout << n << " in binary =  ";
    if (n == 0) {
        cout << "0";
    }
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}
int BinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int takeInput(string s) {
    int result = 0;

    cout << s << endl;
    cin >> result;

    while(cin.fail()) {
        cout << s << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> result;
    }
    return result;
}

int main() {
    cout << "Welcome to Decimal/Binary converter" << endl;
    string message("Please type 1 for Decimal to Binary\n2 for Binary to Decimal\n3 to Exit");

    int input = 0;

    while ( input != 3 ){
        input = takeInput(message);

        int number_to__convert = 0;
        int result = 0;

        string nuber_str = "Please enter the number to convert";

        switch (input) {
            case 1: {

                number_to__convert = takeInput(nuber_str);

                decimalToBinary(number_to__convert);
                break;
            }

            case 2: {

                number_to__convert = takeInput(nuber_str);
                result = BinaryToDecimal(number_to__convert);
                cout << number_to__convert << " in decimal =  " << result << "\n";
                break;
            }
            default: { break; }


        }
    }
    return 0;
}
