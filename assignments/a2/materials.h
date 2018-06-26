#ifndef MATERIALS_H
#define MATERIALS_H


class materials;
//class textbook;
//class website;
//class journal

class course 
{
    public:
        course();
        ~course();
        void set_c_name(const char * to_copy);
        void display() const;
    protected:
        char * course_name;
        materials m;
    
        
};

class materials
{
    public:
        materials();
        ~materials();
        virtual void add();
//        virtual void remove();
//        virtual void change_name();
    protected:
        
};
//
//class textbook: public materials
//{
//    public:
//        textbook();
//        ~textbook();
//        void add();
//        void remove();
//        void change_name();
//    protected:
//        nodeCLL * head;
//        char * title;
//        char * author;
//        char * chapter;
//        char * page;
//
//};
#endif


