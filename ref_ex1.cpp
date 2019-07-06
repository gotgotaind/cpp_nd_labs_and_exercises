/*
Create function swap.
Use template arguments, create generic type T which will be type of both input parameters
Declare input parameters by reference
Create function logic to swap two variable data
Logic is going to swap variables without usage of the helper ( temp ) variable
return type of function is void ( doesn't return value)
Print out value of variables before and after function execution
exit main function
 */
#include <iostream>
using namespace std;

template <typename type>
void zwap(type & a, type & b )
{
    type c = a;
    a=b;
    b=c;
}

int main() {
    char * za="2";
    char * zb="b";
    zwap(za,zb);
    cout << za << " " << zb << "\n";
}