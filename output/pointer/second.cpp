#include<iostream>

int main(){
    // initialization a variable
    int score=400;

    int *myp=&score; // myp pointer points to the score variable address

    printf("Value of score is: %d \n",score);
    printf("value of myp is: %p \n",myp);

    //Now take one reference variable which stores the score variable

    int &another_myp=score;
    printf("value of another_myp is: %d\n",another_myp); // 400

    // modify the score variable value by using reference variable

    another_myp=800;


    printf("Value of score is: %d \n",score); // score variable value is changed 400 to 800
    printf("value of myp is: %p \n",myp); // myp points to same score variable..  0x7ffde5e5ee84 

}