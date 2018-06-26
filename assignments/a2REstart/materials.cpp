#include "materials.h"
#include "node.h"

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

course::course()
{

}
course::~course()
{

}
void course::prompt()
{
    listL text_list;

	int val;
	cout << "\n 1. Textbook " <<
		"\n 2. Website " <<
		"\n 3. Exercise " <<
	"\nWhich material to add?: ";
	cin >> val;
	switch(val)
	{
		case 1: 
    		text_list.add();
			break;
		// case 2:
		// 	listL web_list;
		// 	break;
		// case 3:
		// 	listL exe_list;
		// 	break;
	}

		
}

materials::materials()
{

}

materials::~materials()
{

}
textbook::textbook()
{

}
textbook::~textbook()
{

}

void textbook::set_info(nodeL * new_node)
{
    char * response;
	
	cout << "Title: ";
	cin >> response;
    title = new char[strlen(response)];
	
	cout << "Author: ";
	cin >> response;
	author = new char[strlen(response)];
}
