#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
    
    public:
        // Chai(string _teaName, int _servings): teaName(_teaName), servings(_servings){}
        Chai(string _teaName, int _servings){
            teaName = _teaName;
            servings = _servings;
        }

        //we just need to give the declaraion here of our friend function --> Exact same function signature
        friend bool compareServings(const Chai &chai1, const Chai &chai2);

        void display() const {
            cout << "Tea name: " << teaName << endl;
        }
        
};

//friend --> jo tera hai vo mera hai

//Here compareServings is declared as friend function inside the class, so it can access the private methods
bool compareServings(const Chai &chai1, const Chai &chai2){
    return chai1.servings > chai2.servings;
}

int main(){

    /*
    friend keyword is used to provide member level access of class members to functions and classes that are not a part of the class. Access to both private and protected member fields

    Read at GFG and microsoft official documentation for CPP

    */

    Chai masalaChai("Masala Chai", 4);
    Chai gingerChai("Ginger Chai", 3);

    masalaChai.display();
    gingerChai.display();


    if(compareServings(masalaChai, gingerChai)){
        cout << "Masala Chai is having more servings" << endl;
    } else {
        cout << "Masala Chai is having less servings" << endl; 
    }
    return 0;
}