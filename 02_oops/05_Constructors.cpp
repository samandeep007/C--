#include <iostream>
#include <string>

using namespace std;

class Car {
    private:
        string name;
        int model;
    
    public: 
        Car(string _name, int _model){
            name = _name;
            model = _model;
        }

        void printName(){
            cout << "The name of the car is " << name << endl;
        }

};

int main(){
    /*
    Constructor: A specialized method in a class that is used to create instances without exposing the member variables
    */
   Car alto = Car("Alto", 2012);
   alto.printName();

    return 0;
}