#include <iostream>
#include <string>

using namespace std;

int main(){
    
    // cout << "Welcome to the CPP course with Saman Sandhu 1" << endl;
    cout << "Welcome to the CPP course with Saman Sandhu 2" << endl;
    cout << "Welcome to the CPP course with Saman Sandhu 3" << endl;

    // code file --> [compiler --> Token collection, remove comments, whitespaces] --> executable
    // Write comments only where neccessary
    
    // Data is either stored or processed (validated or mutated)
    // Data store --> Variables, constants, data types
    
    // Variable is a container in the memory of the machine that reserves some space for storing the values depeding on the data type
    int score; //int means I want to store integer in the variable --> declaration
    score = 100; //definition
   
    string username = "Samandeep"; // decalaration and defining in the same line

    // Identifier --> name of a function, variable, class or any such entity
    // Identifier cannot start with an number, special character except dollar or underscore
    // It cannot have space
    // It should not be a reserved keyword
    // it should be descriptive

    int saman_balance = 10;
   
    // Variables: Value can be changed
    // Constant:  Value cannot be changed

    const int uid = 2323; //It cannot change anymore

    // uid = 323; // expression must be a modifiable lvalue

    return 0;
}