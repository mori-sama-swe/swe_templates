#include "test.h"
#include <iostream>

void point_to_const(){

    int x = 20;
    const int *ptr {nullptr};

    ptr = &x;
    std::cout << *ptr << '\n';

    // *ptr = 20 // this will fail - since you cant change a pointer to a constant
}

void modify(int* ptr){
    *ptr = 42; // dereference ptr
}

void passing_a_pointer(){
    int x {10};
    //two ways to pass a pointer to a functions
    int* p = {&x}; // store it ass a pointer

    modify(p);
    modify(&x);
}
