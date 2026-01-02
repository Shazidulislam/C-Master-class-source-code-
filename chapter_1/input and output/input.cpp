
#include <iostream>
#include<string>


/*
??How to get data in our program

*/

int main()
{

    /*

    int age;
    std::string name;
    std::cout << "Please type in your full name : " << std::endl;

    // std::cin >> name ;
    // std::cin >> age ;

    std::cin >> name >> age;

    std::cout << "My name is " << name << ". I am " << age << " years Old." << std::endl;
    */
    /*
        !! Reading data with spaces
    */

    std::string full_name ;
    int age2;

    std::cout << "Type your full name."
     << std::endl;
    //!! spacial function
    std::getline(std::cin,full_name);

    std::cin >> age2;

    std::cout << "Hello " << full_name 
    << ". you are " << age2 << " years old!" 
    << std::endl;


    return 0;
}