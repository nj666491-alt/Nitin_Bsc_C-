#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter value of a and b: ";
    cin >> a >> b;

    cout << "Choose operation:\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Division\n";
    cout << "4. Product\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Addition = " << a + b;
            break;
        case 2:
            cout << "Subtraction = " << a - b;
            break;
        case 3:
            if (b != 0)
                cout << "Division = " << a / b;
            else
                cout << "Error! Division by zero not allowed.";
            break;
        case 4:
            cout << "Product = " << a * b;
            break;
        default:
            cout << "Invalid choice!";
    }

    return 0;
}
