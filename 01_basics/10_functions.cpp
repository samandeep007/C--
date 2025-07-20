#include <iostream>
#include <string>

using namespace std;

float sumNums(float numOne, float numTwo){
    cout << "Float addition is called" << endl;
    return numOne + numTwo;
}

int sumNums(int numOne, int numTwo){
    cout << "Int addition is called" << endl;
    return numOne + numTwo;
}

int main(){
    //function: Reusable block of code that may or may not take parameters, and may or may not return a value.
    
    /*
    function with a return value could be compared to a situation where your mom sends you to the market with money and asks you to bring groceries. You take money and return her groceries.
    function without a return value are like when you're told by your mother to eat food. You eat the food, but don't bring her back anything. You just perform a task
    
    Basic function signature: return_type identifier(parameter){};

    example:

    int sumNums(int numOne, int numTwo){ 
        *Here numOne and numTwo are parameters that function is taking
        return numOne + numTwo;
    }

    A function needs to be called inside the main function for its execution. 
    sumNums(1, 2) --> Returns 3 | Here 1 and 2 are called arguments

    Function Overloading
    ____________________

    It is basically a concept that allows you to create functions with same names but different signature. Here, the functions can have same name, but may take different type of parameters.
    C++ compiler is intelligent enough to distinguish between the functions based on their call. 

    for example:
    float sumNums(float numOne, float numTwo)
    int sumNums(numOne, numTwo)

    Both these function have the same name but are considered different 

    Higher-order functions
    Functions can be assigned to variables
    Function can have other functions inside their body

    Global scope: entities declared here can be accessed throughout the program and changes can be made
    Block scope: anything declared here will not be available outside the curly braces

    //lambda functions: functions without a name. Similar to arrow functions in javascript () => {}

    [](){
        code block
    }(); //Very similar to IIFE in js (Immediately Invoked Function expressions)  

    Lambdas can be assigned to variables as well

    For example:

    auto variable_name = [](parameter){
        some operation on parameter;
        return result
    }

    variable_name(argument);

    auto return type is used with lambda variable names because unlike traditional functions, we don't know the return type for lambda functions.
    
    */

    // sumNums(1.0f, 2.0f);
    // sumNums(1,3);

    //lambda

    auto preparedChai = [](int x){
        cout << "The value of x is " << x << endl;
    };

    preparedChai(5);

    return 0;
}