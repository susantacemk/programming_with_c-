// print the pattern
/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */

// answer

#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        // inner loop for each line * print
        for (int j = 0; j < 5 - i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}