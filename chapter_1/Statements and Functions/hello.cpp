
/*
*A statement is a basics unit of computation in a c++ program

*Every C++ program is a collection of statements organized in a certain way to achieve some goal

*Statement end with a semicolon in c++ (;)

*/

#include <iostream>

int addNumbers(int first_Number, int second_Number)
{
    int sum = first_Number + second_Number;
    return sum;
}

int main()
{

    int firstNumber{12}; // !!Every variable is a statement
    int secondNumber{9};

    int sum = firstNumber + secondNumber;

    sum = addNumbers(firstNumber, secondNumber);
    std::cout << "The sum of two numbers 1 : " << sum << std::endl;

    sum = addNumbers(firstNumber, 33);
    std::cout << "The sum of two numbers 2 : " << sum << std::endl;

    sum = addNumbers(44, 6);
    std::cout << "The sum of two numbers 3 : " << sum << std::endl;
    std::cout << "Sum of two numbers with addNumbers function :: " << addNumbers(56, 44) << std ::endl;
    return 0;
}

/*
*Statement are executed in order from top to bottom when the program is run

*Execution  keeps going untill there is a statement cousing the program to terminate, or run another sequence of statements

*before use function declar it

*/
