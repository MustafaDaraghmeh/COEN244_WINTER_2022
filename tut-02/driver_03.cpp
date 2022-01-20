//
// Created by musta on 2022-01-20.
//
#include <iostream>
using namespace std;

int main(){
    int col_num=10;
    int x [100];  // 10*10

    for(int row=0; row < 10; row++) {
        for (int col = 0; col < 10; col++) {
            x[row * col_num + col] = 0;
        }
    }

    int index_c=9;
    int index_r=9;
    x[index_r * col_num + index_c] = 88;

    for(int r=0; r<10; r++){
        for (int c=0;c<10;c++) {
            cout << x[r * col_num + c] << " ";
        }
        cout<<endl;
    }
}