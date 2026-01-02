#include <iostream>

int main(){
    // Printing data
    std::cout <<"Hello C++20" <<std::endl;

    int age {21} ;

    std::cout << "Age : " << age << std::endl;

    //Error
    std::cerr <<"std::cerr ---->Somethis went wrong"<< std::endl;
    
    //Log Console
    std::clog << "Log message : Some thing Happend" << std::endl;

    return 0;
}