#ifndef TEACHER_H
#define TEACHER_H

#include "node.h"

typedef void funct_ptr(funcParam *);

class menu_item
{
    public:
        void set_menu();
        void display();
    protected:
        char * description;
        funct_ptr * option;
};

class teacher
{
    public:
        teacher();
        ~teacher();
        void read(course_list &);
        void get_response(char * response);
        void set_menu();
        void print_menu();
    protected:
//        void menu_setup();
//        void change_course_name();
};

#endif
