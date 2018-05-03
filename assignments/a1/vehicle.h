#ifndef VEHICLE_H
#define VEHICLE_H

#include "node.h"
#include "package.h"

class department
{
    public:
        department();
        ~department();
        void create();
        list_of_packages department_list;
    protected:

};

class vehicle
{
    public:
        vehicle();
        void read();
        void load_package();
        void check_capacity();
    protected:
        
};
//class van: public vehicle
//{
//    public:
//        list_of_packages van_cargo;
//    protected:
//
//};
//
//class car: public vehicle
//{
//    public:
//        list_of_packages car_cargo;
//    protected:
//};
//
//class drone: public vehicle
//{
//    public:
//        list_of_packages drone_cargo;
//    protected:
//};
//
//
#endif
