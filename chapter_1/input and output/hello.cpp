
/*
std::cout ---> Printing data to the console(terminal)

std::cin --->Reading data from the terminal

std::cerr --->printing errors to the console
std::clog --->printing log messages to the console
*/

#include <iostream>
int main()
{
    /*
    !! Printing Data
   */
    // std:: cout : Printing stuff to the console
    std::cout << "Hello World" << std::endl;

    std::cout << "The Number is : " << 12 << std::endl;

    int ages {20};
    std::cout << "This age is : " << ages << std ::endl;

    // Errors
    std::cerr << "Std::cerr output : Something went wrong" << std::endl;

    // Log messae
    std::clog << "std::clog output : This is Log message" << std::endl;


    /*
    !!! Reading Data
    */

    int age ;
    std::string name ;

    std::cout << "Please type in your First Name : ";
    std::cin >> name ;

    std::cout << "Please type your age : " ;
    std::cin >> age ;
    
    std::cout << "Hello " << name << ". How are you? He is "<< age << " years old."<< std::endl; 
    
    /*
    !! Chaining std::cin
    */

    int Age ;

    std::string Name ;

    std::cout <<"Please type in your Last name and age, separated by spaces : " << std::endl;

    std::cin>>Name >> Age ;

    std::cout << "Hello " << name  <<Name << "! Your age " << Age <<" years old."<< std::endl;

    return 0;
}
