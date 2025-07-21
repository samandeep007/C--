#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    Two dimensional arrays can be compared to matrices which have both columns and rows.
    Horizontal rows: Vertical columns

    data_type array_name[rows][columns];
    */

    int chaiSales[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << chaiSales[i][j] << ", ";
        }
    }

    return 0;
}