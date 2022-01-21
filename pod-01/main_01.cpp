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

    char* ptr_char= get_string(10);
//    ptr_char[0]='A';
//    ptr_char[1]='B';

    strcpy(ptr_char, "Mustafa Daraghmeh\0");
    //    https://en.cppreference.com/w/c/string/byte/strcpy
    print_char(ptr_char);

    Point p100(22,34, "Test\0");
    p100.point_info->print_point_name();

    cout<<"Total objects created:"<< Point::get_object_count()<<endl;

    Point p1;
    cout<<"Total objects created:"<< p1.get_object_count()<<endl;

    Point p2;
    cout<<"Total objects created:"<< Point::get_object_count()<<endl;

    Point* ptr_Point = nullptr;
    ptr_Point= get_point(10,15);
    cout<<"Total objects created:"<< Point::get_object_count()<<endl;

    Point* ptr_Point_array= nullptr;
    ptr_Point_array = get_array_of_points(100);
    cout<<"Total objects created:"<< Point::get_object_count()<<endl;

    ptr_Point_array[0].set_x(10);
    ptr_Point_array[0].set_y(50);

    int row_index=0;
    int column_index=0;

    // Mapping 1D[100] to 2D[10][10] array, as row=10 x column=10
    int column_number= 10;
    int index=0;
//    ptr_Point_array[row_index * column_number + column_index]=0;
//    index = get_2D_index(row_index, column_number, column_index);
//    ptr_Point_array[row_index * column_number + column_index]=0;

}

