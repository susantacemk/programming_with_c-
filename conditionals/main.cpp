// Here, We discussed if, else , elseif and nested if else statement

#include<iostream>
using namespace std;

int main(){
    // int number=10;
    // if(number>12){
    //     printf("number is big of 12\n");
    // }else{
    //     printf("number is less than 12\n");
    // }

   
    int rating;
    printf("Enter the rating value in between 1 to 5\n");
    cin>> rating;
    /* switch condition [the switch case statement is used for executing one condition from multiple conditions. It is similar to an if-else-if ladder.
    The switch statement consists of conditional-based cases and a default case.] */
    switch(rating){
        case 1:
            printf("Rating is very Bad!!\n");
            break;
        case 2:
            printf("Rating is Bad!\n");
            break;
        case 3:
            printf("rating is Good\n");
            break;
        case 4:
            printf("Rating is Excellent\n");
            break;
        case 5:
            printf("Rating is Outstanding\n");
            break;
        default:
            printf("Please enter the rating in between 1 to 5\n");
    }
}