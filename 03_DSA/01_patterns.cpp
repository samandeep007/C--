#include <iostream>

using namespace std;

void pattern1(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern3_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 1; l < n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < 2 * (n - i); k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i + 1; k++)
        {
            cout << "*";
        }
        for (int l = 1; l < n - i; l++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < 2 * (n - i); k++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 0; i <= (2 * n - 1); i++)
    {
        int stars = i;
        if (i > n)
            stars = (2 * n - i);
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int k = 0; k < 2 * n - (2 * i); k++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(65 + j) << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << char(65 + j);
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    int letter = 65;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(letter);
        }
        letter++;
        cout << endl;
    }
}

void pattern15(int n)
{
    int start = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << char(65 + k) << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << char(start - j) << " ";
        }
        start++;
        cout << endl;
    }
}

void pattern16(int n)
{
    int start_letter = 65 + (n - 1);
    int curr_letter = start_letter;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            curr_letter = start_letter + j;
            cout << char(curr_letter) << " ";
        }
        start_letter--;
        cout << endl;
    }
}

int main()
{
    pattern16(5);
    return 0;
}