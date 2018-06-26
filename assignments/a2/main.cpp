#include "node.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    course_list psu_courses;
    psu_courses.build();
    psu_courses.display();
    
    return 0;
};
