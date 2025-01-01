//
// Created by Owner on 12/26/2024.
//

#ifndef SIMPLE_CALCULATOR_CALCULATOR_H
#define SIMPLE_CALCULATOR_CALCULATOR_H
#include <iostream>
#include <string>

using namespace std;

class Calculator {
private:
    static int final;
public:
    inline static int addition(const int& firstnum, const int& secondnum){
        final = firstnum + secondnum;
        return final;
    }
    inline static int subtraction(int& firstnum, int& secondnum){
        final = firstnum - secondnum;
        return final;
    }
    inline static int division(int& firstnum, int& secondnum){
        final = firstnum / secondnum;
        return final;
    }
    inline static int multiplication(int& firstnum, int& secondnum){
        final = firstnum * secondnum;
        return final;
    }
    static void inputchecker(char& input);
    static void getIntegerInput(int &num);
    static void printType (const char input);

};


#endif //SIMPLE_CALCULATOR_CALCULATOR_H
