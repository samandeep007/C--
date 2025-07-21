#include <iostream>
#include <vector> //sequence container --> Elements of same data type in linear arrangement. Allows fast random access to any element | Standard Library

/*
User defined data types
Access modifiers in C++: public (Access to everything), private (default | within the class), protected (Access to derived class)
*/

using namespace std;

class Tea
{
    // Attributes, Properties, State, or Data fields

    public: 
        string name;                // Name of the tea
        int servings;               // Number of servings
        vector<string> ingredients; // List of ingredients of the tea
    

        //Functionality, Methods, Behaviour, Member functions
        void displayChaiDetails(){
            cout << "Tea name: " << name << endl;
            cout << "Tea servings: " << servings << endl;
            cout << "Ingredients: " << endl;
            for(string ingredient : ingredients){ //Specialized loop for array
            cout << ingredient << endl;
        }
    }

}; // class needs a semi colon after the closing brace


int main()
{

    Tea lemonTea; //Unlike java and C#, C++ doesn't provide a default constructor

    lemonTea.name = "Lemon Tea";
    lemonTea.servings = 10;
    lemonTea.ingredients = {"tea leaves", "lemon", "water"};

    lemonTea.displayChaiDetails();

    Tea masalaTea;

    masalaTea.name="Masala Tea";
    cout << masalaTea.name << endl;

    //Pass by value
    int numOne = 10;
    int numTwo = numOne;
    
    numTwo = numTwo - 2;

    cout << "The value of numOne is " << numOne << endl; //The value of numOne didn't change because numTwo had a copy of numOne


    return 0;
}
