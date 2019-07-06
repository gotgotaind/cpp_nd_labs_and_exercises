#include <iostream>

int main() {

    int *ptr;
    ptr = new int[5];
    for(int i = 0; i < 5; i++){
        int inputVar;
        //std::cin>>inputVar;
        ptr[i] = i*2;
    }
    for(int i = 0; i < 5; i++){
        std::cout<<"Number "<<ptr[i] << " is stored on " << (ptr + i) << " address."<<std::endl;
    }

    delete[] ptr;
    std::cout << ptr[3] <<"\n";
    return 0;
}