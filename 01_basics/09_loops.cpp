#include <iostream>
#include <string>

using namespace std;

void challengeOne(){

    int totalNumOfCups = 10;

    while(totalNumOfCups!=0){
        cout << "Order made successfully!" << endl;
        totalNumOfCups--;
        cout << "Remaining Cups: " << totalNumOfCups << endl;     
    }
}

void challengeOneEnhanced(){

    int totalNumOfCups = 10;

    while(totalNumOfCups!=0){
        
        int numOfCupsOrdered;
        cout << "Enter the number of cups you want: ";
        cin >> numOfCupsOrdered;
        
        if(numOfCupsOrdered > totalNumOfCups){
            cout << "Sorry! We don't have enough tea left. We just have " << totalNumOfCups << " cups remaining." << endl;
            continue;
        }

        totalNumOfCups -= numOfCupsOrdered;
        cout << "Remaining Cups: " << totalNumOfCups << endl;     
    }
}

void challengeTwo(){
    
    string response;

    do {
        cout << "Do you want tea? (yes/no) :  ";
        cin >> response;
    } while (response != "no");

}

void challengeThree(){
    for(int i = 0; i < 5; i++){
        cout << "Brewing instructions" << endl;
    }
}

void challengeFour(){
    while(true){
        string response;
        cout << "Tea Served";
        cin >> response;
        if(response == "stop" || response == "Stop"){
            break;
        }
    }
}

void challengeFive(){
    string teas[] = {"Masala Tea", "Lemon Tea", "Green Tea", "Black Tea", "Ginger Tea"};

    string response;

    cout << "Do you like green tea? ";
    getline(cin, response);

    for(int i = 0; i<5; i++){
        if(teas[i] == "Green Tea" && (response == "no" || response == "No")){
            continue;
        }
        cout << "Brewing " << teas[i] << endl;
    }
}

void challengeSix(){
      string teas[] = {"Masala Tea", "Lemon Tea", "Green Tea", "Black Tea", "Ginger Tea"};
        for(int i = 0; i<5; i++){
         for(int j = 0; j<3; j++){
            cout << teas[i] << " Brewed" << endl;
         }
        }
}

int main(){
    //Loop
    /*
    Loops are used to repeat a block of code until a certain condition is met
    loops can either be entry controlled or exit controlled
    Entry controlled loops are those that check the condition first and then execute the block of code. If the condition is false in the very first iteration, the block of code won't be executed even once
    Exit controlled loops are opposite to entry controlled ones. Here, the condition is checked after executing the block of code. These loops execute at least once even if the condition is false in the first go
    
    Entry controlled loops: for, while
    Exit controlled: Do-while


    //WHEN THE NUMBER OF ITERATIONS ARE KNOWN BEFOREHAND
    for(counter, condition, update counter) {
            block of code to be executed
    }


    //WHEN YOU DON'T KNOW THE NUMBER OF ITERATIONS
    counter variable;

    while(condition is true){
            block of code to be executed
            update the counter
    }

    //WHEN YOU WANT THE CODE TO BE EXECUTED AT LEAST ONCE
    counter varible;
    do {
            block of code to be executed
            update the counter
    } while (conditiion)

    Post fix and pre fix operators:
    varible++ --> Post fix --> Use the variable in the statement and then increment the value
    ++variable --> Pre fix --> Increment the value and then use in the statement
 
    * Just like conditionals, we can nest loops as well
    * the counter variable in for loop is not available outside the scope of the loop body;

    */

    // challengeOne();
    // challengeOneEnhanced();
    
    challengeSix();

    return 0;
}