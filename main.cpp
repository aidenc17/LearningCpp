#include <iostream>
#include <vector>
namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

//typedef  std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int number_t;

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
    std::cout << '\n';


    //double (num w decimal)
    double price = 10.99;
    double gpa = 4.00;
    double temperature = 65.01;

    std::cout << price << '\n';
    std::cout << '\n';


    //single character
    char grade = 'A';
    char initial = 'A';
    char currency = '$';

    std::cout << grade << '\n';
    std::cout << '\n';


    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool forSale = true;
    std::cout << '\n';

    //strings (objects that represent a sequence of texts)

    std::string name = "aiden";
    std::string day = "Tuesday";
    std::string food = "ice cream";
    std::string stringAddress = "124 you thought street";


    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    std::cout << '\n';

    // consts
    const double PI = 3.14159;
    //PI = 456;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << '\n';
    std::cout << '\n';


    //Namespaces

    //need the namespace outside of main
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';

    using namespace std; // legal, but not advised.
    cout << first::x << '\n';
    string withoutPrefix = "not advised";

    using namespace first;
    cout << x << '\n';
    cout << second::x << '\n';

    //alternative to evil line
    using std::cout;
    using std::string;
    //causes less confusion and less likely to cause error, but still steer clear
    cout << '\n';


    //typedef -- replaced mostly by using

    //need to include the #include <vector>

    //also done outside the main function
    //think like alias to the longer name


    std::string firstname = "Aiden";

    //typedef std::string text_t;
    text_t lastNameUsingTypedef = "Cox";

    //typedef int num_t
    number_t apples = 5;

    //same can be accomplished using `using text_t = std::string`

    //type conversion

    int z = 3.14;

    std::cout << z << '\n'; //truncates decimal - IMPLICIT

    double zy = (int) 3.14;
    std::cout << zy << '\n'; // truncates decimal - EXPLICIT

    char x = 100;
    std::cout << x << '\n';

    std::cout << (char) 100 << '\n';

    int correct = 8;
    int questions = 10;

    double score = correct / (double) questions * 100; //type conversions to double otherwise id have int devision = 0%
    std::cout << score << '\n';


    return 0;
}