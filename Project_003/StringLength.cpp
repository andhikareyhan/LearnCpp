#include <iostream>
#include <string>
using namespace std;
string myString;
int length;

int main() {
    cout << "Enter a string: ";
    getline(cin, myString);
    length = myString.length();
    cout << "The string is " << length << " characters long";

    return 0;
}