#include <iostream> // To include the header files or basically the C++ libraries --> iostream --> responsible for input and output as the name suggests
// #include <math.h> // for mathematical operations
// #include <string> // for strings
#include <bits/stdc++.h> // This libary has all the libraries in it | # means preprocessor directives

// Token parsing means understanding using, include and other keywords

// using namespace std; //standard namespace | Namespace is the region where the work is being done | It is used to containerize the code
//iostream is written inside the standard namespace

using std::cout;
using std::cin;
using std::endl;

namespace mySpace {
    void display(){
       cout << "Hello from mySpace" << endl;
    }
}

// Function: Block of code that serves some purpose. Return data type must be declared: string sayHi(){return "Hi"}

int addNums(int x, int y){ // Function should have descriptive name
    return x+y;
}

int main(){ //Entry point of execution

    //Why to learn C++ and how it is still relevant in 2025
    /*
    1. It is platform independent and compiled language
    2. Object-oriented: C on steriods. Adds OOPs paradigm to C
    3. Statically-typed: You need to specify the data type of the variable beforehand
    4. Speed: Very fast and efficient 
    5. Pointers: Direct memory management, making it very suitable for developing system intensive apps
    6. Majority of the python libraries are written in C++ under the hood
    7. React Native has most of it's source code written in C++
    8. Bjarne Stroustrup created C++ back in 1985 while working on his thesis on adding OOPs to Simula (A programming language back in the times)
    9. Bjarne's thesis failed drastically because adding OOPs to Simula made the language almost useless because of steep drop in the performance
    10. He then thought of adding the same code to C and found that it worked pretty well when integrated with C
    11. He named the first C++ compiler as CFont which was later renamed to C++
    12. C++ 11: Auto, lambda, smart pointers
    13. C++ 14: Generics
    14. C++ 17 --> C++ 20 --> C++ 23 (has concepts similar to Rust)
    15. C++ source code (.cpp) --> [Preprocessor] --> Preprocessed code --> [Compiler] --> Object code (.o/.obj) --> [Linker] --> Executable binary (.exe or a.out) [Portable across same OS/architecture]
    */

    std::cout << "Welcome to my Program" << std::endl;
    cout << "My name is Samandeep Singh" << endl;

    // << output operator | >> input operator 
    // cout --> character output
    // cin --> character input
    
    // [Operating System] <-- [hello.cpp or hello.exe (main method --> Entry point of execution)]  
    
    mySpace::display(); //display method from our very own mySpace namespace\

    cout << addNums(1,2);

    // << the sharp side indicates where the value is being added

    return 0;

}