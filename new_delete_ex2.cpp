/*
Declare basic include -> iostream
Declare main function
Use pointer syntax to declare integer array pointer
use new operator to allocate memory block for integer array
Assign that operation to declared pointer
Create for loop and use it to input new values from cin stream
Print every memory address and value in array 1. Release occupied space before exiting
*/

#include <iostream>
using namespace std;
int main(void) {
    int * values;
    values=new int[50];
    for(int i=0;i<3;i++)
    {
        
        values[i]=3*i;
    }
    for(int i=0;i<3;i++) {
        cout << values[i] << ",";
    }
    cout << "\n";
    delete[] values;
    cout << values[1] << "\n";
}