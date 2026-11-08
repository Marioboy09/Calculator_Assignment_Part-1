#include <iostream>
#include <limits>

using namespace std;

void printHeader(const string& title);
double getValidNumber(const string& prompt);
void performArithmetic(double num1, double num2);

int main() {
    printHeader("Arithmetic Operations Program");

    double firstNum = getValidNumber("Enter the first number: ");
    double secondNum = getValidNumber("Enter the second number: ");

    performArithmetic(firstNum, secondNum);

    return 0;
}

void printHeader(const string& title) {
    cout << "\n==================================\n";
    cout << "  " << title << "\n";
    cout << "==================================\n";
}

double getValidNumber(const string& prompt) {
    double value;
    while (true) {
        cout << prompt;
        if (cin >> value) {
            return value;
        }
        
        cout << "Invalid input. Please enter a valid numerical value.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void performArithmetic(double num1, double num2) {
    printHeader("Inputs & Results");
    
    cout << "First Input Number:  " << num1 << "\n";
    cout << "Second Input Number: " << num2 << "\n";
    cout << "----------------------------------\n";

    // 1. Addition
    cout << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";

    // 2. Subtraction
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";

    // 3. Multiplication
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";

    // 4. Division
    cout << num1 << " / " << num2 << " = ";
    if (num2 != 0.0) {
        cout << (num1 / num2) << "\n";
    } else {
        cout << "Undefined (Error: Division by zero)\n";
    }

    // 5. Modulo
    cout << num1 << " % " << num2 << " = ";
    if (static_cast<long long>(num2) != 0) {
        long long int1 = static_cast<long long>(num1);
        long long int2 = static_cast<long long>(num2);
        cout << (int1 % int2) << "\n";
    } else {
        cout << "Undefined (Error: Modulo by zero)\n";
    }
    cout << "==================================\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
