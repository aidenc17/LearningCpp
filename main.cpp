#include <iostream>

int main() {

    // comments in c++
    /*
     *
     *
     * multiline comment
     *
     */

    std::cout << "I like pizza" << '\n';
    std::cout << "it's really good!" << '\n';


//ints and data types

    //integer (whole num)
    int age = 20;
    int year = 2025;
    int days = 45;

    std::cout << age << '\n';

    //double (num w decimal)
    double price = 10.99;
    double gpa = 4.00;
    double temperature = 65.01;

    std::cout << price << '\n';


    //single character
    char grade = 'A';
    char initial = 'A';
    char currency = '$';

    std::cout << grade << '\n';


    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;

    //strings (objects that repesent a sequence of texts)

    std::string name = "aiden";
    std::string day = "Tuesday";
    std::string food = "ice cream";
    std::string stringAddress = "124 you thought street";


    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

return 0;
}