#include <iostream>
#include <string>

using namespace std;

void challengeOne(){
    
    int numOfCups;
    float pricePerCup;

    cout << "Enter the number of cups you want: ";
    cin >> numOfCups;

    cout << "Enter the price per cup ($): ";
    cin >> pricePerCup;

    float totalPrice = numOfCups * pricePerCup;

    if(totalPrice >= 50){
        cout << "Since your order is above $50, you're given a 5% discount. Enjoy!!" << endl;
        totalPrice-=0.05*totalPrice;
    }

    cout << "Your total payable amount is $" << totalPrice;

}

void challengeTwo(){

    int numOfTeaBags;

    cout << "Enter the number of tea bags you have: ";
    cin >> numOfTeaBags;

    if(numOfTeaBags<10){
        cout << "Buddy! Since you have less than 10 tea bags, we are giving you 5 extra" << endl;
        numOfTeaBags+=5;
    }

    cout << "You have " << numOfTeaBags << " tea bags."; 
}

void challengeThree() {
    int numOfTeaBagsPurchased;
    string badge;

    cout << "Enter the number of tea bags you want to purchase: ";
    cin >> numOfTeaBagsPurchased;

    if(numOfTeaBagsPurchased > 10 && numOfTeaBagsPurchased <= 20 ){
        badge = "Silver";
    }
    else if(numOfTeaBagsPurchased > 20) {
        badge = "Gold";
    }

    else {
        badge = "";
    }

    cout << "You have bought " << numOfTeaBagsPurchased << " tea bags." << endl;
    
    if(badge != ""){
        cout << "You are now a " << badge << " member of the store";
    }
}

void challengeFour(){

    int numOfCupsPurchased;
    char response;
    bool isStudent;

    cout << "Enter the number of cups you want to purchase: ";
    cin >> numOfCupsPurchased;

    cout << "Are you a student? (Y/N) ";
    cin >> response;

    isStudent = response == 'y' || response == 'Y' ? true : false;

    if(isStudent || numOfCupsPurchased > 15){
        cout << "You're eligible for a discount";
    }
    else {
        cout << "Sorry, you are not eligible for a discount";
    }
}

int main()
{

    // OPERATORS
    //  2 + 3 --> Operand 1: 2, Operand 2: 3, Operator: +
    
    /*
    Unary Operators: Single operand
    Binary Operators: Two operands
    Ternary Operators: Three operands

    Conditionals: (Start) --> <Evaluate the condition> --> (true or false) --> if true --> [Do this] | if false --> [Do this] --> (end)

    Arithmetic Operators: + - * / %
    Assignment Operators: = += -= *= /= %=
    Relational Operators: == > < >= <=
    Logical Operators: && ||
    Bitwise Operators: & | ^ ! >> <<

    */

    // challengeOne();
    // challengeTwo();
    // challengeThree();
    challengeFour();

    return 0;
}

