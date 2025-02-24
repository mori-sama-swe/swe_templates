#include <iostream>
#include "test.h"

void swapPointers(int* ptr1, int* ptr2){

    std::cout << "current memory address of ptr1: " << ptr1 << std::endl;
    std::cout << "current memory address of ptr2: " << ptr2 << std::endl;
    

    // allows the modification of a value of that address....... 
    // x00001 - 15 <= 15 +10
    *ptr1 = *ptr1 + *ptr2; // Memory Has 5 Originally = 5 + 10 
    *ptr2 = *ptr1 - *ptr2; // 5 = 15 - 10
    *ptr1 = *ptr1 - *ptr2; // 10 = 15 - 5

    std::cout << "ptr1: " << *ptr1 << std::endl;
    std::cout << "ptr2: " << *ptr2 << std::endl;
    
    std::cout << "swapped memory address: " << ptr1 << std::endl;
    std::cout << "swapped memory address: " << ptr2 << std::endl;
}

int pointers(){
    
    int a {5};
    int b {10};
    
    int *ptr1 {nullptr};
    int *ptr2 {nullptr};

    ptr1 = &a;
    ptr2 = &b;

    std::cout << "ptr1 originally is: " << *ptr1 << std::endl;
    std::cout << "ptr2 originally is: " << *ptr2 << std::endl;

    swapPointers(ptr1,ptr2);

    std::cout << "ptr1 should be 10: " << *ptr1 << std::endl;
    std::cout << "ptr2 should be 5: " << *ptr2 << std::endl;

    return 0;
}