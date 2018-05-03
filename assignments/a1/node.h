#ifndef NODE_H
#define NODE_H

#include "package.h"

class nodeLLL
{
    public:
        nodeLLL();
        ~nodeLLL();
        nodeLLL * get_next();
        void  set_next(nodeLLL * set);
        nodeLLL * get_previous();
        void set_previous(nodeLLL * set);
        void generate_info(nodeLLL * new_node);
    protected:
        int getID(nodeLLL *temp);
        package shipment;
        nodeLLL * next;
        nodeLLL * previous;
};
    

class list_of_packages: public nodeLLL
{
    public:
        list_of_packages();
        ~list_of_packages();
        void add_package();
        bool if_less_than(nodeLLL * new_node, nodeLLL * current);
    protected:
        nodeLLL * head;
        void sort_package(nodeLLL * new_node, nodeLLL * current);
};

#endif
