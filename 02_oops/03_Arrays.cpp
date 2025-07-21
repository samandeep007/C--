#include <iostream>
#include <string>

using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i]; //Accumulating the value inside total
    }
    return total;
}

int main()
{

    /*
    Heap and Stack Memory
    Stack Memory --> Very similar to stack of books --> Follows last in first out (LIFO) principle --> Deals with method calls --> Stores the reference to derived data types.
    Heap Memory --> Holds the actual value of the objects.

    Array: It is a linear data structure that stores elements at contigious memory locations.
           It can store elements of same data type
           Unlike java and other programming languages, C++ doesn't provide you with any implicit length or size method for array traversal
           When you declare an array of integers with size 5. It behind the scene, creates a container that can store 5 integer variables. Each variable has a memory location.
           int nums[3] --> | [][][] | Here each box stores one element

           Array indexing starts from zero
           Index of an element = position of the element - 1;
           Index of last element = size or length of the array - 1;

    */

    string bestFriends[4] = {"Samar", "Navjot", "Taran", "Harman"};

    // TRAVERSINGH THROUGH ARRAY

    // Using the for..in loop
    for (string bestFriend : bestFriends)
    {
        cout << bestFriend << endl;
    }

    // Using traditional for loop
    for (int i = 0; i < 4; i++) // Here i needs to be smaller than the length of the array, otherwise it will go out of the bounds, and return a garbage value.
    {
        cout << bestFriends[i] << endl;
    }

    int chaiServed[7] = {50, 60, 55, 23, 65, 34, 62};

    cout << "Chai cups served on day 1: " << chaiServed[0] << endl;

    cout << "Chai served today: " << totalChaiServed(chaiServed, 7) << endl;

    return 0;
}