#include <iostream>
using namespace std;

// create a function which are swapped two variables..

void swap(int &a, int &b)
{
    int temp = move(a);
    a = move(b);
    b = move(temp);
}

string printMe()
{
    return "Hii !! Myself Susanta Maity....\n";
}

int main()
{
    int a = 3;
    int b = 5;
    swap(a, b);
    cout << "A is = " << a << endl;

    string s = printMe();


    string && ss=printMe();
    cout<<ss <<endl;
}