#include "node.h"
#include "package.h"

#include <ctype.h>
#include <iostream>
#include <stdlib.h>

list_of_packages::list_of_packages():head(0)
{

}
list_of_packages::~list_of_packages()
{

}
nodeLLL::nodeLLL():next(0), previous(0)
{

}
nodeLLL::~nodeLLL()
{

}

nodeLLL * nodeLLL::get_next()
{
    return next;

}
void nodeLLL::set_next(nodeLLL *set)
{   
    next = set;
    return;
}
nodeLLL * nodeLLL::get_previous()
{
    return previous;
}

void nodeLLL::set_previous(nodeLLL * set)
{
    previous = set;
    return;
}
int nodeLLL::getID(nodeLLL * temp)
{
    return shipment.getID();
}
void nodeLLL::generate_info(nodeLLL * new_node)
{
    new_node->shipment.read();
}

void list_of_packages::add_package()
{
    nodeLLL * new_node;
    generate_info(new_node);
    nodeLLL * current = head;
    sort_package(new_node, current);
}
bool list_of_packages::if_less_than(nodeLLL * new_node, nodeLLL * current)
{
  
    if(getID(new_node) <= getID(current))
    {
            return 1;
    }
    else
    {
        return 0;
    }
}

void list_of_packages::sort_package(nodeLLL * new_node, nodeLLL * current)
{
    if(!current)
    {
        head = new_node;
        return;
    }
    if((!if_less_than(new_node, current)) && (current->get_next()))
    {
        new_node->set_previous(current);
        new_node->set_next(NULL);

        
        current->set_next(new_node);
        
        return;
    }
    else if(if_less_than(new_node, current) && (!current->get_next()))
    {
        new_node->set_next(current);
        new_node->set_previous(current->get_previous());

        current->set_previous(new_node);
        current->set_next(NULL);

        return;
    }
    else
    {
        sort_package(new_node, current->get_next());
    }


}

