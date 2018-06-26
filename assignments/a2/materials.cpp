#include "materials.h"

#include <cstring>
#include <iostream>
using namespace std;

course::course():course_name(0)
{

}

course::~course()
{

}
void course::set_c_name(const char * to_copy)
{
    course_name = new char[strlen(to_copy)+1];
    strcpy(course_name,to_copy);
}
void course::display() const
{   
    cout << "--------------------------------\n";
    cout << "Course Name: " << course_name << endl;
}

void materials::materials()
{

}
void materials::~materials()
{

}
void materials::add()
{

}
