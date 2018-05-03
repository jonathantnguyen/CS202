#ifndef NODE_H
#define NODE_H

#include "materials.h"

class node_c
{
    public:
        node_c();
        ~node_c();
        node_c * get_next();
        node_c * get_previous();
        void set_next(node_c * set);
        void set_previous(node_c * set);
        void bt_name(node_c * new_node, int index);
        void display(node_c * & node_course);
    protected:
        course c;
        node_c * next;
        node_c * previous;
};

class course_list: public node_c
{
    public:
        course_list();
        ~course_list();
        void add_course();
        void build();
        void display();
    protected:
        void build(node_c * & node_course, int index);
        node_c * head;
};

#endif
