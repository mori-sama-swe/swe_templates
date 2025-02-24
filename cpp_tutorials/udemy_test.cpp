#include "test.h"
#include <iostream>
#include <string>

int find_max_element(int* arr, int size){
    if (size <= 0) return 0;
    int max_e = arr[0];
    for(int i=0; i < size; ++i){
        if(arr[i] > max_e){
            std::cout << "array element: " << arr[i] << '\n';
            max_e = arr[i];
        }
    }
    return max_e;
}

int find_max_element_test(){

    int arr[] {-12,-23,-45,-67,-49};
    int size = sizeof(arr) / sizeof(arr[0]); // size of elements = size of bytes in the array / size of the first data type in the array

    std::cout << "size of the array: " << size << '\n';
    std::cout << "size of arr: " << sizeof(arr) << '\n';
    int a = find_max_element(arr, size);

    return a;
}


std::string reverse_string(const std::string &str){

    int len_of_str = static_cast<int>(str.length());
    char* mem_r = new char[len_of_str + 1];

    for(int i=0; i < len_of_str; ++i){
        mem_r[i] = str[len_of_str - 1 - i];
    }

    mem_r[len_of_str] = '\0';
    std::string reversed(mem_r);
    delete []mem_r;
    return reversed;
}

std::string reverse_string_by_point(const std::string &str){
    std::string reversed {};

    const char* start = str.c_str(); // pointer to start
    const char* end = start;

    while(*end != '\0'){
        ++end; 
        // 1: x00001 = x00001 + 1 (after first iteration it now points to 2 memory address)
    }
    --end;
    while(end >= start){
        reversed += *end;
        --end;
    }   
    return reversed;
}

std::string reverse_string_test(){
    std::string input = "Hello World!";
    std::string reversed = reverse_string(input);
    std::string reversed_by_p = reverse_string_by_point(input);
    std::cout << "Reversed Regular: " << reversed << std::endl;
    std::cout << "Reversed By Pointer: " << reversed_by_p << std::endl;
    return input;
}
