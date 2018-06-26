#ifndef MATERIALS_H
#define MATERIALS_H

class nodeL;
class course
{
	public:
		course();
		~course();
		virtual void prompt();
	protected:
		 

};

class materials: public course
{
	public:
		materials();
		~materials();
//		void add();
		//void get_info();
	protected:

};

class textbook: public materials
{
	public:
		textbook();
		~textbook();
		void add();
        void set_info(nodeL * new_node);	
	protected:
		char * title;
		char * author;	
};


#endif
