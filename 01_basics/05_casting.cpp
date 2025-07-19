#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){

    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice;
    int roundedPrice = round(teaPrice);

    int teaQuantity = 2;
    double totalPrice = teaPrice * teaQuantity; //double for precision. Int would have returned 99

    cout << roundedTeaPrice << endl;
    cout << roundedPrice << endl;
    cout << totalPrice << endl;

    return 0;
}