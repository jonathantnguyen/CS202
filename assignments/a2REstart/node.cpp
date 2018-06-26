#include "node.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

nodeL::nodeL():next(0), previous(0)
{

}

nodeL::~nodeL()
{

}

nodeL * nodeL::get_next()
{
	return next;
}

nodeL * nodeL::get_previous()
{
	return previous;
}

void nodeL::set_next(nodeL * set)
{
	next = set;
	return;
}
void nodeL::set_previous(nodeL * set)
{
	previous = set;
	return;
}

listL::listL():head(0)
{

}

listL::~listL()
{

}

void listL::add()
{
    add(head);
}

void listL::add(nodeL * & head)
{	

	if(!(this->head))
	{
		head = new nodeL;
		head->set_previous(NULL);
		text.set_info(head);
		return;
	}

	nodeL * head_next = head->get_next();
	
    if(!head_next)
	{
		nodeL * new_node = new nodeL;
		text.set_info(new_node);
		head->set_next(new_node);
		new_node->set_previous(head);
		new_node->set_next(NULL);
		return;
	}
	else
	{
		return add(head_next);
	}
}
