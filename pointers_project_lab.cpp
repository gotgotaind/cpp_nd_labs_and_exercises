/*
Declare generic class PtrDetails
Create generics via templates
all attributes and methods are going to be public, because they are going to be used by other classes
create attribute for refcount
create attribute memPtr as generic pointer for storage of basic info about memory
create bool attribute isArray for recognition of memory type allocated
create attribute arraySize for working with array allocation
Declare constructor for PtrDetails which will have two parameters
First constructor paremeter is going to be pointer and second which is not required, is going to be size of eventual array in memory
We need to construct logic of the constructor which will set isArray attribute if size is larger then 0
Create overload operator == which will be used for comparison between to PtrDetails object in lists. It is mandatory

*/

template <class T> class PtrDetails {
    int refcount;
    T* memPtr;
    bool isArray;
    int arraySize;
    PtrDetails(T* _memPtr,int _arraySize)
};

int main(void) {



}