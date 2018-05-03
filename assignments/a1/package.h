#ifndef PACKAGE_H
#define PACKAGE_H

class package
{
	public:
		package();
		void create_package();
		void add_info();
		void display() const;
		void read();
		void change_destination();
		int getID();
	protected:
	    void calculate_volume();
	    char check_ship_method(char response);
	    int packageID;
		char * destination;
		char * name;
		char shipMethod;
		int height;
		int _width;
		int depth;
		int volume;
};

#endif
