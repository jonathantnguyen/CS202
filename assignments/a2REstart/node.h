#ifndef NODE_H
#define	NODE_H

#include "materials.h"

class nodeL
{
	public:
		nodeL();
		~nodeL();
		nodeL * get_next();
		nodeL * get_previous();
		void set_next(nodeL * set);
		void set_previous(nodeL * set);
	protected:
		textbook text;
		nodeL * next;
		nodeL * previous;

};

class listL: public nodeL
{
	public:
		listL();
		~listL();
		void add();
	protected:
		void add(nodeL * & new_node);
		nodeL * head;
};
#endif
