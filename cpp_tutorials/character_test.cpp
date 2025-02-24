#include <iostream>
#include "test.h"

void character_test(){
    
    char my_name[10];
    strcpy(my_name,"pat");
    std::cout << my_name << '\n';
    std::cout << my_name[0] << '\n';
}