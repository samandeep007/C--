#include <iostream>
#include <string>

using namespace std;

void challengeOne(){
    
    string typeOfTea;

    cout << "Enter the type of tea you want: ";
    getline(cin, typeOfTea);

    if(typeOfTea == "Green tea" || typeOfTea == "green tea"){
        cout << "Your order is confirmed";
    }
    else{
        cout << "Your order is not confirmed";
    }
}

void challengeTwo(){

    int currentHour;

    cout << "Enter the current hour in 24 hour format: ";
    cin >> currentHour;

    if(currentHour >=8 && currentHour < 18){
        cout << "The store is open";
    }
    else {
        cout << "The store is closed";
    }
}

void challengeThree(){

    int numOfCups;
    double pricePerCup = 2.99;
    double totalPrice;

    cout << "Enter the number of cups you want to purchase: ";
    cin >> numOfCups;

    totalPrice = numOfCups * pricePerCup;

    if(numOfCups > 20){
        cout << "You're eligible for a 20% discount" << endl;
        totalPrice-=0.2*totalPrice;
    }
    else if(numOfCups >= 10 && numOfCups <= 20){
        cout << "You're eligible for 10% discount" << endl;
          totalPrice-=0.1*totalPrice;
    }
    else {
        cout << "You're not eligible for any discount" << endl;
    }

    cout << "Your total bill amount is $" << totalPrice;

}

void challengeFour(){
    
    int userChoice;
    int teaPrice;

    cout << "-----------------------------------------------------------------" << endl;
    cout << "WELCOME TO SANDHU CHAI BAR" << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Which chai would you like to have? Choose from the following menu: \n" << "1. Green Tea\n" << "2. Black Tea\n" << "3. Oolong Tea\n" << "Enter your choice please to know the price (1,2, or 3): ";
    cin >> userChoice;

    switch(userChoice){
        case 1: 
            teaPrice = 2;
            break;

        case 2: 
            teaPrice = 3;
            break;
        
        case 3:
            teaPrice = 4;
            break;
        
        default: 
            cout << "Invalid choice!";
    }

    if(teaPrice){
        cout << "The price of tea is $" << teaPrice; 
    }
}

int main(){

    // Conditionals: (Start) --> <Evaluate the condition> --> (true or false) --> if true --> [Do this] | if false --> [Do this] --> (end)

    // challengeOne();
    // challengeTwo();
    // challengeThree();
    challengeFour();

    return 0;
}