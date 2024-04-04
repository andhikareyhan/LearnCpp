#include <iostream>
using namespace std;
int x, y;
int sum;

int main() {
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;
    sum = x + y;

    cout << "The total is: " << sum;
    
    return 0;
}