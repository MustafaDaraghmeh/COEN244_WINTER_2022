//
// Created by musta on 2022-01-13.
//

#include <iostream>

int main(){
//    determine the size of the array
    int const size = 3;
    // create one dimension array on the stack memory;
    // Note: you can not change the size during the run time
    int int_arr[size];
    // initialize the array by index
    int_arr[0] = 100;
    int_arr[1] = 200;
    int_arr[2] = 300;
    // OR initialize the array by the use of array address and index(displacement value)
    *(int_arr + 0) = 100; // dereference the given address and update the value in that location
    *(int_arr + 1) = 200;
    *(int_arr + 2) = 300;
    std::cout<<int_arr<<std::endl; // get back the address of the array
    std::cout<<&int_arr[0]<<std::endl; // the address of the array is the same of the address of the first element
    std::cout<<*(int_arr + 0) <<std::endl; // dereference the given address and get the value in that location
    std::cout<<*(&int_arr[0])<<std::endl; //reference and dereference within the same line

    // create one dimension array on the heap memory;
    // Note: you can change the size during the running time,
    // but you need to hold your data somewhere and change the size then copy the data back,
    // and delete the un-utilized memory locations.
    int * int_ptr = new int [size];
    int_ptr[0] = 100;
    int_ptr[1] = 200;
    int_ptr[2] = 300;
//    OR
    *(int_ptr + 0) = 1000;
    *(int_ptr + 1) = 2000;
    *(int_ptr + 2) = 3000;

    std::cout<<(int_ptr + 0 )<<std::endl; // return addresses
    std::cout<<(int_ptr + 1 )<<std::endl;
    std::cout<<(int_ptr + 2 )<<std::endl;

    // return data stored in the given addresses
    std::cout<<*(int_ptr + 0 )<<std::endl;
    std::cout<<*(int_ptr + 1 )<<std::endl;
    std::cout<<*(int_ptr + 2 )<<std::endl;

    return 0;
}