#include <iostream>

using namespace std;

int main()
{
    // let's talk about the while loops
    int my_score[] = {90, 80, 56, 76, 89, 69};
    int i = 0; // initilization of variable where the loop are started..
    while (i < 6)
    { // condition checked where the loop are stopped..
        std::cout << "Scored is :" << my_score[i] << endl;
        i++; // next flow
    }

    // Now we can talk about break and continue statements..
    puts("\nlet's talk about the break and continue statement::\n");
    int my_array[] = {1, 2, 3, 4, 5, 6};
    int j = 0;
    while (j < 5)
    {
        // lets after 3 we are break the loop
        // if(j==2){
        //     std::cout<<"number is::"<<my_array[j]<<endl;
        //     break;
        //     // flow control goes to line number 30
        // }

        // lets talk about the continue
        // continue means=> Just skip one step and then reenter the loop..
        if (j == 2)
        {
            j++;
            continue;
        }
        std::cout << "number is::" << my_array[j] << endl;
        j++;
    }
    puts("outside the loop\n");

    puts("Do while Loop\n"); // atleast one time loop are run
    int age[] = {12, 23, 45, 56, 77, 78};
    int k = 0;
    do
    {
        cout << age[k] << endl;
        k++;
    } while (k < 6);

    puts("Let's talk about the for loop\n");

    string colour[4] = {"Blue", "Red", "Orange", "Yellow"};

    // Print Strings
    for (int i = 0; i < 4; i++)
    {
        cout << colour[i] << endl;
    }

    puts("For loop parts 2\n");
    for (string str : colour) // for-each loop
    {
        cout << str << endl;
    }

    puts("For loop parts 3 \n");

    // pointer traversal
    char my_name[]={'S','U','S','A','N','T','A',0};
    for(char *cp=my_name;*cp!=0;cp++){
        cout<<*cp<<"\t";
    }
    cout<< "\n";
    for(int i=0;my_name[i];i++){
        cout<<my_name[i]<<"\t";
    }
    cout<<"\n";

}