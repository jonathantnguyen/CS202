#ifndef MATERIALS_H
#define MATERIALS_H

class course 
{
    public:
        course();
        ~course();
        void set_c_name(const char * to_copy);
        void display() const;
    protected:
        char * course_name;
};

#endif


