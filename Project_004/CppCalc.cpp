#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "======= C++ CALCULATOR =======\n";
    cout << "What would you like to do?\n";
    cout << "1. Arithmetics\n";
    cout << "2. Scientific Math\n";
    cout << "3. Scientific Math (Single Input)\n";
    cout << "Enter your choice (1-3): ";

    int choice;
    cin >> choice;

    double num1, num2, num3, result;

    switch(choice) {
        case 1:
            cout << "You chose arithmetics.\n";
            cout << "How many numbers do you want to input? (2 or 3)\n";
            int input;
            cin >> input;

            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;

            if (input == 3) {
                cout << "Enter the third number: ";
                cin >> num3;
            }

            cout << "Here's what you could do!\n";
            cout << "1. Addition\n";
            cout << "2. Subtraction\n";
            cout << "3. Multiplication\n";
            cout << "4. Division\n";
            cout << "Enter your choice (1-4): ";
            int opt1;
            cin >> opt1;

            switch(opt1) {
                case 1:
                    result = num1 + num2;
                    if (input == 3) {
                        result += num3;
                    }
                    break;
                case 2:
                    result = num1 - num2;
                    if (input == 3) {
                        result -= num3;
                    }
                    break;
                case 3:
                    result = num1 * num2;
                    if (input == 3) {
                        result *= num3;
                    }
                    break;
                case 4:
                    if (num2 != 0) {
                        result = num1 / num2;
                        if (input == 3 && num3 != 0) {
                            result /= num3;
                        } else if (input == 3 && num3 == 0) {
                            cout << "Error: Can't divide by zero\n";
                            return 1;
                        }
                    } else {
                        cout << "Error: Can't divide by zero\n";
                        return 1;
                    }
                    break;
                default:
                    cout << "Invalid choice!\n";
                    return 1;
            }
            cout << "Result: " << result;
            break;

        case 2:
            cout << "You chose scientific math.\n";

            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;

            cout << "Here's what you could do!\n";
            cout << "1. Max\n";
            cout << "2. Min\n";
            cout << "3. Difference\n";
            cout << "4. Hypotenuse\n";
            cout << "5. Modulus\n";
            cout << "6. Power\n";
            cout << "Enter your choice (1-6): ";
            int opt2;
            cin >> opt2;

            switch(opt2) {
                case 1:
                    result = fmax(num1, num2);
                    break;
                case 2:
                    result = fmin(num1, num2);
                    break;
                case 3:
                    result = fdim(num1, num2);
                    break;
                case 4:
                    result = hypot(num1, num2);
                    break;
                case 5:
                    result = fmod(num1, num2);
                    break;
                case 6:
                    result = pow(num1, num2);
                    break;
                default:
                    cout << "Invalid choice!\n";
                    return 1; 
            }
            cout << "Result: " << result;
            break;

        case 3:
            cout << "You chose scientific math (single input).\n";
            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Here's what you could do!\n";
            cout << "1. Absolute\n";
            cout << "2. Arccosine\n";
            cout << "3. Arcsine\n";
            cout << "4. Arctangent\n";
            cout << "5. Cube Root\n";
            cout << "6. Ceiling\n";
            cout << "7. Cosine\n";
            cout << "8. Hyperbolic Cosine\n";
            cout << "9. Exponential\n";
            cout << "10. Exponential Minus 1\n";
            cout << "11. Floor\n";
            cout << "12. Sine\n";
            cout << "13. Hyperbolic Sine\n";
            cout << "14. Tangent\n";
            cout << "15. Hyperbolic Tangent\n";
            cout << "Enter your choice (1-15): ";
            int opt3;
            cin >> opt3;

            switch(opt3) {
                case 1:
                    result = fabs(num1);
                    break;
                case 2:
                    result = acos(num1);
                    break;
                case 3:
                    result = asin(num1);
                    break;
                case 4:
                    result = atan(num1);
                    break;
                case 5:
                    result = cbrt(num1);
                    break;
                case 6:
                    result = ceil(num1);
                    break;
                case 7:
                    result = cos(num1);
                    break;
                case 8:
                    result = cosh(num1);
                    break;
                case 9:
                    result = exp(num1);
                    break;
                case 10:
                    result = expm1(num1);
                    break;
                case 11:
                    result = floor(num1);
                    break;
                case 12:
                    result = sin(num1);
                    break;
                case 13:
                    result = sinh(num1);
                    break;
                case 14:
                    result = tan(num1);
                    break;
                case 15:
                    result = tanh(num1);
                    break;
                default:
                    cout << "Invalid choice!\n";
                    return 1;
            }
            cout << "Result: " << result;
            break;

        default:
            cout << "Invalid choice!\n";
            return 1;
    }

    return 0;
}