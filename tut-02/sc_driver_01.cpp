//
// Created by musta on 2022-01-21.
//

#include <iostream>
using namespace std;

int main(){
    int x{0};
    x=10;
    int* ptr=&x;
    *ptr=20;

    cout<<"x="<<x<<endl;
    cout<<"ptr="<<ptr<<endl;
    cout<<"*ptr="<<*ptr<<endl;

    const int size =10;
    int arr[size];
    int index = 0;
    arr[index]=10;
    *(arr + 1)=20;

    cout<<"array address="<<arr<<endl;
    cout<<"array address="<<arr + 1<<endl;

    cout<<"sizeof(int)="<<sizeof(int)<<endl;

    cout<<"array address="<<*arr<<endl;
    cout<<"*(arr + 0)="<<*(arr + 0)<<endl;
    cout<<"*(arr + 1)="<<*(arr + 1)<<endl;

    int* ptr_int = new int();
    *ptr_int=10;
    cout<<"ptr_int="<<ptr_int<<endl;
    cout<<"*ptr_int="<<*ptr_int<<endl;

    int* prt_int_array = new int[size];
    for(int i=0;i<size;i++)
        prt_int_array[i]=i+1*2;

    for(int i=0; i<size; i++)
        cout<<"*(prt_int_array + "<<i<<")= "<<*(prt_int_array + i)<<"\r";
    cout<<endl;
    delete ptr_int;
    delete [] prt_int_array;
    prt_int_array= nullptr;
    ptr_int= nullptr;

    prt_int_array = new int[100]; // we need to access 1D array using 2D array indexes
    for(int i=0;i<100;i++)
        prt_int_array[i]=i;

    // Mapping 1D[100] to 2d[10][10] array,
    int column_number = 10;

    int row_index= 9; //rows [0 - 9]
    int column_index= 9;// columns [0 - 9]

    index = row_index * column_number + column_index; //it returns the single index, by using two indexes
    prt_int_array[index]=-10;

    cout<<"prt_int_array[row_index * column_number + column_index] = "<<prt_int_array[index]<<endl;

    for(int row=0; row < 10; row++){
        for(int column=0; column < 10; column++){
            cout<<prt_int_array[row * column_number + column]<< " ";
        }
        cout<<endl;
    }
    return 0;
}