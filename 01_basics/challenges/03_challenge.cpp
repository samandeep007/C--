#include <iostream>
#include <string>

using namespace std;

int main(){

    string userTeaInput;
    cout << "Which tea would you like to have? ";
    getline(cin, userTeaInput);

    int numOfCups;
    cout << "How many cups of " << userTeaInput << " would you like to have? ";
    cin >> numOfCups;

    cout << "SANDHU COFFEE BAR\n" <<  "----------------------------------------\n" << "ORDER SUMMARY \n" << userTeaInput << " : " << numOfCups << endl; 
    return 0;
}