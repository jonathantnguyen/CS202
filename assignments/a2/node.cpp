#include "node.h"

#include <stdlib.h>
#include <iostream>

using namespace std;

node_c::node_c():next(0),previous(0)
{

}

node_c::~node_c()
{

}
node_c * node_c::get_next()
{
    return next;
}
node_c * node_c::get_previous()
{
    return previous;
}

void node_c::set_next(node_c *set)
{   
    next = set;
    return;
}
void node_c::set_previous(node_c * set)
{
    previous = set;
    return;
}
course_list::course_list():head(0)
{

}

course_list::~course_list()
{

}

//void course_list::add_course()
//{
//
//}
//
void node_c::bt_name(node_c * new_node, int index)
{
    const char * psu_classes[] ={"Calculus", "Discrete Math", "Philosophy",
        "Biology", "Chemistry"};
    
    new_node->c.set_c_name(psu_classes[index]);

}

void course_list::build(node_c * & node_course, int index)
{
    if(index < 0)
    {  
        delete(node_course);
        return;
    }
    if(!node_course)
    {
        node_course = new node_c;
    }
    bt_name(node_course,index);
    node_c * new_node = new node_c;
    node_course->set_next(new_node);
    new_node->set_previous(node_course);
    return build(new_node, --index);
}

void course_list::build()
{   
    int bt_size = (5)-1;
    build(head,bt_size);
}
void course_list::display()
{
    node_c::display(head);
}
void node_c::display(node_c * & node_course)
{
    if(!node_course)
    {
        return;
    }
    else
    {
        node_course->c.display();
        node_course = node_course->get_next();
        return display(node_course);
    }

}

