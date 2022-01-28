//
// Created by musta on 2022-01-21.
//
#include <iostream>
#include <cstring>

using namespace std;
class data{
public:
    int x;
    data(){}
};
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
    int data;
    Info(): Info(0,""){data=0;}
    Info(int id, const char* p_name){
        this->id =id;
        point_name = get_string(255);
        strcpy(point_name, p_name);
        data=0;
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
    size_t size_data_arr;

public:
    Info* point_info;
    data* data_arr;
    static int count_objects;
    Point(){y=0; x=0; size_data_arr=5; point_info = nullptr;}
    Point(int x, int y, const char* p_name, size_t size_data_arr): y(y), x(x){
        Point::count_objects++;
        point_info = new Info(count_objects, p_name);
        data_arr = new data[size_data_arr];
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
//        delete [] data_arr;
    }
};

//int get_2D_index(int, int, int);
//int get_2D_index(int row_index=0, int column_index, int column_number=0) {
//
//    return (row_index * column_number + column_index);
//}

int Point::count_objects=0;

Point* get_point(int x=0, int y=0){
    return new Point();
}

Point* get_array_of_points(int size=10){
    return new Point[size];
}


char * get_string(int size=10){
    char* ptr = new char[size];
    for(int i=0;i<size; i++)
        ptr[i]=' ';
    ptr[size-1] ='0';

    return ptr;
}

void print_char(char* ptr){
    int i=0;
    while (ptr[i] != '\0'){
        cout<<ptr[i];
        i++;
    }
    cout<<endl;
}

int main(){
    size_t size_Point_Array = 100;
    Point* ptr_Point_Array = new Point[size_Point_Array];
    for(size_t i=0; i<size_Point_Array;i++)
        ptr_Point_Array[i]= *new Point();

    ptr_Point_Array[1]=*new Point(0,0,"Point-01\0",size_Point_Array);
    ptr_Point_Array[2]=*new Point();
    ptr_Point_Array[3]=*new Point();

    delete [] ptr_Point_Array;

}

