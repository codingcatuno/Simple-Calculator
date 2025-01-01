#include <iostream>
#include <string>
#include <limits>
#include "Calculator.h"

using namespace std;

int main() {
    // Variables
    char input;
    string trueinput;
    int firstnum;
    int secondnum;
    int final;

    // -Introduction-
    cout << "Welcome to the Simple Calculator by Cyril D. Tchouta-Moussa" << endl <<
            "-----------------------------------------------------------" << endl;
    // Run loop when input is not Q or q
    while (input != 'q' && input != 'Q'){
        cout << "Type the OPERATOR of the FIVE options below\n"
                "------------------------------------\n"
                "+ | Addition\n"
                "- | Subtraction\n"
                "* | Multiplication\n"
                "/ | Division\n"
                "Q | EXIT" << endl;
        cout << "Option: "; getline (cin, trueinput, '\n');
        input = trueinput[0]; // Set input to first character of trueinput
        Calculator::inputchecker(input); // Check for invalid option

        // Check to see if input is Q or q to exit
        if (input == 'q' || input == 'Q') break;

        //Print chosen option
        Calculator::printType(input);

        cout << "Please enter the first number: "; cin >> firstnum;
        Calculator::getIntegerInput(firstnum); // Validate First Number

        cout << "Please enter the second number: "; cin >> secondnum;
        Calculator::getIntegerInput(secondnum); // Validate Second Number

        // Checks input to the options to preform Calculations
        if (input == '+'){
            final = Calculator::addition(firstnum, secondnum);
        }else if(input == '-'){
            final = Calculator::subtraction(firstnum, secondnum);
        }else if(input == '*'){
            final = Calculator::multiplication(firstnum, secondnum);
        }else if(input == '/'){
            final = Calculator::division(firstnum, secondnum);
        }

        // Prints Results :)
        cout << "The result is: " << final << endl << endl;

        cout << "Press Enter To continue.";
        cin.get(); // Waits for user to press Enter
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout << "Thank you for using Simple Calculator! See you next time!" << endl;
    return 0;
}
