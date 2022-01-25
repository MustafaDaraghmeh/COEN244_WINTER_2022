//
// Created by musta on 2022-01-25.
//

#include <iostream>

using namespace std;
class Manager{
public:
    const int size_int_arr;
    int* ptr_int_arr;
    Manager():size_int_arr(4), ptr_int_arr(nullptr){
        this->ptr_int_arr = new int[this->size_int_arr];
        for(int i=0; i<this->size_int_arr;i++)
            this->ptr_int_arr[i]=0;
    }
    Manager(const int size):size_int_arr(size), ptr_int_arr(nullptr){
        this->ptr_int_arr = new int[this->size_int_arr];
        for(int i=0; i<this->size_int_arr;i++)
            this->ptr_int_arr[i]=0;
    }
    Manager(int* ptr_int_arr, const int size):ptr_int_arr(ptr_int_arr), size_int_arr(size){}

    void print(){
        for(int i=0; i<this->size_int_arr;i++)
            cout<<this->ptr_int_arr[i]<< " ";
        cout<<endl;
    }

    void inti(){
        for(int i=0; i<this->size_int_arr;i++)
            this->ptr_int_arr[i]=i*2;
    }
};

int main(){
    Manager man1;
    man1.print();
    man1.inti();
    man1.print();

    Manager man2(100);
    man2.print();
    man2.inti();
    man2.print();

    const int size_int_arr =100;
    int* ptr_int_arr = new int[size_int_arr];
    for(int i=0; i<size_int_arr;i++)
        ptr_int_arr[i]=i+1 * 2;

    Manager man3(ptr_int_arr, size_int_arr);
    man3.print();
//    man1.ptr_int_arr = new int[man1.size_int_arr];
//    for(int i=0; i<man1.size_int_arr;i++)
//        man1.ptr_int_arr[i]=0;




    return 0;
}