#include <iostream>
#include <string>

using namespace std;

int main()
{
    // String concat
    string first_name = "Mahamudul Hasan ";
    string last_name = "Ridoy";

    string full_name = first_name.append(last_name);
    cout << full_name;

    // String length

    cout << endl;
    string lenStr = " fopii09435903495r5iu39455u i9 3";

    cout << lenStr.length();

    // String User Input
    cout << endl;
    string your_name;
    cout << "Enter your name - ";
    getline(cin, your_name);
    cout << your_name;

    // Ommiting Namespace
    cout << endl;
    std::string greeting = "Hello";
    std::cout << greeting;
    return 0;
}