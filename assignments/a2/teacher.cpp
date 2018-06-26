#include "teacher.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

teacher::teacher()
{

}
teacher::~teacher()
{

}
char *teacher::get_response(char * response)
{   
    char * push_r;
    push_r = new char[strlen(response)+1];
    strcpy(push_r, response);
}

char * teacher::set_response(char * response, char * & push_r)
{   
    push_r = new char[strlen(response)+1];
    strcpy(push_r, response);
}
void teacher::set_menu()
{
    ftd[] =
    {
        {"ADD COURSE", add_course},
        {"CHANGE NAME", change_name},
    };

}
void teacher::print_menu()
{
}
void teacher::read(course_list& psu_courses)
{
    char * response;
    cout << "\nHere are your current courses:\n";
    psu_courses.display();

    cout << "What would you like to do: \n"
    print_menu();
    



