//
// Created by musta on 2022-01-21.
//

#include <iostream>
#include <cstring>

using namespace std;
class Info{
private:
    int id;
    char* point_name;
    char * get_string(int size=10){
        char* ptr = new char[size];
        for(int i=0;i<size; i++)
            ptr[i]=' ';
        ptr[size-1] ='0';

        return ptr;
    }
public:
    Info(): Info(0,""){}
    Info(int id, const char* p_name){
        this->id =id;
        point_name = get_string(255);
        strcpy(point_name, p_name);
    }

    void print_point_name(){
        int i=0;
        while (point_name[i] != '\0'){
            cout<<point_name[i];
            i++;
        }
        cout<<endl;
    }
    ~Info(){
        delete [] point_name;
    }

};

class Point{
private:
    int x;
    int y;


public:
    Info* point_info;
    static int count_objects;
    Point(): Point(0,0, " "){}
    Point(int x, int y, const char* p_name): y(y), x(x){
        Point::count_objects++;
        point_info = new Info(count_objects, p_name);
    }

    bool set_x(int x){
        if (x >= 0) {
            this->x = x;
            return 1;
        }
        return 0;
    }
    int get_x() {
        return this->x;
    }
    bool set_y(int y){
        if (x >= 0) {
            this->y = y;
            return 1;
        }
        return 0;
    }
    int get_y() {
        return this->y;
    }
    void print(){
        cout<<"Point("<<x<<", "<<y<<")";
    }
    static int get_object_count(){
        return Point::count_objects;
    }


    ~Point(){
        delete point_info;
    }
};

class data{
public:
    int x;
};
int main(){
    data* ptr_2D_array = new data[100];
    for(int i=0;i<100;i++)
        ptr_2D_array[i].x=i;

    // Mapping 1D[100] to 2d[10][10] array,
    int column_number = 10;

    int row_index= 9; //rows [0 - 9]
    int column_index= 9;// columns [0 - 9]

    ptr_2D_array[(row_index * column_number + column_index)].x=10;

    row_index= 0; //rows [0 - 9]
    column_index= 0;// columns [0 - 9]

    ptr_2D_array[(row_index * column_number + column_index)].x=10;
//    ptr_2D_array[(row_index * column_number + column_index)].print();

//    cout<<"prt_point_array[row_index * column_number + column_index] = "<<ptr_2D_array[index]<<endl;
    return 0;
}