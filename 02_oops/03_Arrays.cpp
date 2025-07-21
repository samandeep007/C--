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

//It's not possible to return an array from a function by default

 int* prepareChaiOrders(int cups){
    int* orders = new int[cups]; //new keyword is used to create array in dynamic memory

    for(int i = 0; i < cups; i++){
        orders[i] = i + 1 * 10;
    }

    return orders; //pointer stores the address of the first array element 
 }

int main()
{

    /*
    Heap and Stack Memory
    Stack Memory --> Very similar to stack of books --> Follows last in first out (LIFO) principle --> Deals with method calls --> Stores the reference to derived data types.
    Heap Memory --> Holds the actual value of the objects. It is also called dynamic memory

    Array: It is a linear data structure that stores elements at contigious memory locations.
           It can store elements of same data type
           Unlike java and other programming languages, C++ doesn't provide you with any implicit length or size method for array traversal
           When you declare an array of integers with size 5. It behind the scene, creates a container that can store 5 integer variables. Each variable has a memory location.
           int nums[3] --> | [][][] | Here each box stores one element

           Array indexing starts from zero
           Index of an element = position of the element - 1;
           Index of last element = size or length of the array - 1;

    pointer is a data type used to store memory address
    * and & are used in the world of pointers
    * is the data type --> int*
    & is the reference of the memory location (address);


    */

    string bestFriends[4] = {"Samar", "Navjot", "Taran", "Harman"};

    // TRAVERSING THROUGH ARRAY

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

    cout << endl << endl;

    int cups = 10;

    int* chaiOrder = prepareChaiOrders(cups);

    for(int i = 0; i<cups; i++){
        cout << "Cups: " << i + 1 << " has " << chaiOrder[i] << "ml" << endl;
    }

    // int num = 22;
    // int* number = &num; // number holds the memory address of num
    // cout << "The memory address of "  << num << " is " << number << endl;



    //memory cleanup
    delete[] chaiOrder; //whenever new is used, use delete too

    return 0;
}