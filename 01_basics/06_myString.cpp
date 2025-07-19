#include <iostream>
#include <string> //Sequence of characters --> words || sentences

using namespace std;

int main(){

    // string bestTea = "Masala Chai";
    // cout << "The \"best\" tea is " << bestTea << endl;
    
    string favTeaType;
    int teaQuantity;
    
    cout << "Which tea would you like to order? " << endl;

    // cin >> favTeaType; //takes in the first word from the input phrase

    getline(cin, favTeaType); //takes in the whole line

    cout << "How many cups do you want? " << endl;

    cin >> teaQuantity;

    cout << "Order Summary\n" << "---------------------------------\n" << favTeaType << " : " << teaQuantity << endl; 

    // \ is called escape character
    // \n is new line character
    // \t for tab
    // \a for bell alert

    return 0; 
}