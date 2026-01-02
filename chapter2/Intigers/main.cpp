

#include <iostream>

int main()
{
    /*
    !! Variable braced initialization
    */

        int elephant_count ;

        int lion_count{};

        int dog_count{10};

        int cat_count{15};


        int domesticated_animals {dog_count+cat_count};

        std::cout << elephant_count << lion_count << dog_count <<
        cat_count << domesticated_animals << std::endl;

    /*
    !! Functional variable initialization
    */

    int apple_count(5);
    int orange_count(10);

    int fruit_count(apple_count+orange_count);

    int bad_initialization(doesnt_exist3+diesnt_exist4);

    int narrowing_conversion_functional(2.8);
     return 0;
}