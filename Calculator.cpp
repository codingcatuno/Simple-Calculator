//
// Created by Owner on 12/26/2024.
//

#include "Calculator.h"
#include <iostream>
#include <limits>

int Calculator::final = 0;

void Calculator::inputchecker (char& input){
    string trueinput;
    // Check to see if input contains invalid option before running
    if (input != '+' && input != '-' && input != '/' && input != '*' && input != 'q' && input != 'Q'){
        while (true){
            cout << "Invalid option! Please pick a valid option!" << endl;
            cout << "Type the OPERATOR of the FIVE options below\n"
                    "------------------------------------\n"
                    "+ | Addition\n"
                    "- | Subtraction\n"
                    "* | Multiplication\n"
                    "/ | Division\n"
                    "Q | EXIT" << endl;
            cout << "Option: "; getline (cin, trueinput, '\n');
            input = trueinput[0]; // Assign input the first character of trueinput
            // Check to see if the current input is valid
            if (input == '+' || input == '-' || input == '/' || input == '*' || input == 'q' || input == 'Q'){
                return;
            }
        }
    }
    else{
        return;
    }
}

void Calculator::getIntegerInput(int &num) {
    // Check to see if value isn't an integer
    while(cin.fail()){
        cin.clear(); // Clear error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer
        cout << "Non-Number Value: Please enter an integer value!" << endl;
        cout << "Please enter a number: ";
        cin >> num; // Get the input again
    }
}

void Calculator::printType(const char input) {
    if (input == '+'){
        cout << "Addition" << endl;
    }else if(input == '-'){
        cout << "Subtraction" << endl;
    }else if(input == '*'){
        cout << "Multiplication" << endl;
    }else if(input == '/'){
        cout << "Division" << endl;
    }
}
