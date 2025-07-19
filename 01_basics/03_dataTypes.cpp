#include <iostream>

using namespace std;

int main(){

    // Data Types: Type of data we are going to store in a variable (memory)
    // Data Types --> Primitive | Derived | User Defined
    // Primitive --> integer, float, double, char, boolean, void
    // Derived --> Arrays (Collection of similar data types), function, pointer (memory address), reference (value at memory address)
    // User defined --> structure (similar to classes), Union, enum, class, Typedef

    // PRIMITIVES

    int teaLeaves = 50;
    float boilingTemp = 85.5;       // float for the decimal value
    double priceOfTea = 10.99999; // double for greater precision than float --> four decimal places
    char teaGrade = 'A';           // char is defined within single quotes. Double quote is for strings
    bool isTeaReady = false;        // could either be true or false | 1 or 0

    // Integer and char values are also considered true

    cout << isTeaReady << endl; // prints 0 because false is equivalent to 0

    cout << teaGrade << endl; // prints B for 'AB'

    cout << priceOfTea << endl;



    return 0; // main function returns an integer value. 0 indicates the successful execution of the code
}