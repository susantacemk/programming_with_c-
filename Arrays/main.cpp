#include<iostream>

using namespace std;


int main(){
    // Array is a continous memory location ..which stors lot of data in same dataType..
    // declaring a array

    int integer_array[4]={1,2,3,4};
    cout<<integer_array[0]<<endl; //1

    // by default array stores the memory locations
    cout<<integer_array<<endl;

    // using pointer we can change the value of array 
    int *array_p=integer_array; // same as the value of integer_array
    // cout<<array_p<<endl;

    *array_p=29;
    cout<<integer_array[0]<<endl; //29 [change the integer_array first index value.]

    printf("Before updation Second index value is %d\n",integer_array[1]);
    array_p++; // move to second address
    *array_p=209; //{ change the value of 1 to 209}
    printf("After updation Second index value is %d\n",integer_array[1]);

}