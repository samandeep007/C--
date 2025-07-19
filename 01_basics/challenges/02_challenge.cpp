#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int teaBasePrice;

    cout << "Enter the base price for the tea: ";

    cin >> teaBasePrice;

    int increasedPrice = (int) teaBasePrice + (0.1 * teaBasePrice);

    cout << "The rounded base price of the tea is " << increasedPrice << endl;


    return 0;
}