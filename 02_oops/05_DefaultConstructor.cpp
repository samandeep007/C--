#include <iostream>
#include <string>
#include <vector>

using namespace std; //Doesn't use that much in production level code

class Chai {
    public:
        string* teaName;
        int servings;
        vector<string> ingredients;

        Chai(){ //no return method here
         
            teaName = new string("Unknown Tea");
            servings = 1;
            ingredients = {"Water", "Tea Leaves"};
            cout << "Constructor called" << endl;
        }

        Chai(string _teaName, int _servings, vector<string> _ingredients){ //Constructor overloading --> Parameterized constructor
            teaName = new string(_teaName);
            servings = _servings;
            ingredients = _ingredients;
            cout << "Parameterized constructor called" << endl;
        }

        //Destructor
        ~Chai(){
            delete teaName;
            cout << "Destructor called" << endl;
        }

        //Copy constructor
        Chai(const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
              cout << "Copy constructor called" << endl;
        }


        void displayChaiDetails(){
            cout << "Tea Name: " << *teaName << endl;
            cout << "Servings: " << servings << endl;
            cout << "Ingredients: ";
            for(string ingredient : ingredients){
                cout << ingredient << " ";
            }
            cout << endl;
        }
};



int main(){
    /*
    Constructor: A specialized method in a class that is used to create instances without exposing the member variables.
                 It is called automatically when an object is created. 
    */
 
    // Chai meriChai; //Default construtor called

    // meriChai.displayChaiDetails(); //meriChai member variables are initialized with the default constructor values.

    Chai teriChai = Chai("Lemon Tea", 4, {"Water", "Tea Leaves", "Honey"});
    teriChai.displayChaiDetails();

    Chai copiedChai = teriChai;
    copiedChai.displayChaiDetails();

    teriChai.teaName = new string("Modified Lemon Tea");
    cout << "Teri chai:" << endl;
    teriChai.displayChaiDetails();

    cout << "Copied chai: " << endl;
    copiedChai.displayChaiDetails(); //It still displays the old meriChai teaName, even though we changed the name of it.

    return 0;
}