#include "vehicle.h"
#include "node.h"

#include <iostream>
#include <stdlib.h>

using namespace std;
department::department()
{
    
}
department::~department()
{

}
void department::create()
{
    list_of_packages * department_list = new list_of_packages;
    department_list->add_package();
}
vehicle::vehicle()
{

}

void vehicle::load_package()
{

}

void vehicle::read()
{
    check_capacity();

}
void vehicle::check_capacity()
{
  //  cout << "You have " << create_queue.shipment.count_queue() <<"in the queue.";

}
