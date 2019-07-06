/*
Declare one integer and one double variable
Declare two references of same type
Use initial variables and assign them upon initialization to corresponding references
Check references, write them out
Change, modify variables
Write references again
 */
#include <iostream>
using namespace std;

int main()
{
    int i;
    double d;
    int & ri=i;
    double & rd=d;

    i=3;
    d=3.14;
    cout << i << " " << d << std::endl ;
    ri=4;
    d=5.13;
    cout << i << " " << d << std::endl ;
}