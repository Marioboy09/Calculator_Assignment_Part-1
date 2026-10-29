#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "\n==============================\n";
        cout << "      ARITHMETIC MENU         \n";
        cout << "==============================\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cout << "==============================\n";
        cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "\n[Selected: Addition]\n";
            break;
        case 2:
            std::cout << "\n[Selected: Subtraction]\n";
            break;
        case 3:
            std::cout << "\n[Selected: Multiplication]\n";
            break;
        case 4:
            std::cout << "\n[Selected: Division]\n";
            break;
        case 5:
            std::cout << "\nExiting the program. Goodbye!\n";
            break;
        default:
            std::cout << "\nInvalid choice! Please select an option between 1 and 5.\n";
            break;
        }

    } while (choice != 5);

    return 0;
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
