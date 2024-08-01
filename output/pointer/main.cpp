#include<iostream>

using namespace std;

int main(){
    // int life = 4; // declaration and initialization of avariable..
    int card;
    card=40;
    int my_card=card;
// declare a pointer
    int *myp;
    myp=&my_card; // pointer store the address..

    my_card=*myp; // pointer dereference..
    printf("Value of card is: %d\n",my_card);
    printf("Value of card is: %p\n",myp);
    printf("Value of card is: %d\n",my_card);
    
    return 0;
}
