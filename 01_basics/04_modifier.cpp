#include <iostream>

using namespace std;

int main(){

    // int smallTeaPack = -100; //int could have both positive and negative values

    unsigned smallTeaPack = 1200; //no sign will be considered --> negative values will return a garbage value

    long largeTeaStorage = 32384232;

    long long veryLargeTeaStorage = 34324342342332432;

    __int64 num1 = 12;

    short teaSample = 25;

    cout << teaSample << endl;
    cout << smallTeaPack << endl;
    cout << largeTeaStorage << endl;
    cout << veryLargeTeaStorage << endl;
    cout << num1 << endl;
    return 0;
}