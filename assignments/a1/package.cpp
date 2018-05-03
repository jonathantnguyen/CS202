#include "package.h"

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;


package::package():height(0), _width(0), depth(0), volume(0), destination(0), packageID(0), name(0), shipMethod(0)
{

}
void package::calculate_volume()
{
	height = rand()%20 +1;
	_width = rand()%30 + 1;
	depth = rand()%30 + 1;
	volume = height * _width * depth;
}

void package::create_package()
{
	const char * locations[] = {"Seattle", "Bellevue", "Spokane", "Vancouver", "Tacoma",
							"Redmond", "Olympia", "Everett", "Yakima", "Bellingham",
							"Portland", "Salem", "Eugene", "Bend", "Medford",
							"Beaverton", "Corvallis", "Hillsboro", "Ashland", "Clackamas"};
	int index = rand()%20;
	destination = new char[strlen(locations[index])];
	strcpy(destination, locations[index]);
	packageID = ((rand()%1000 +1) + (rand()%500) +1);
	calculate_volume();
    
}

char package::check_ship_method(char response)
{
    if((response == char('E')) || (response == char('S')) || (response == char('D')))
    {
        return response;  
    }
    else
    {
        cout << "\n[ERROR]: Invalid Shipping Method\n";
        cout << "Shipping Method: ";
        cin >> response;
        check_ship_method(response);   
    }
}
void package::read()
{
	char response[100];
	char temp;
	create_package();
	cout << "\nThere seems to be a missing a piece of information, who is this package for?: ";
	cin >> response;
	cin.ignore(100, '\n');
	name = new char[strlen(response)+1];
	strcpy(name, response);
    cout << "\nHow would you like to ship it? (E)xpress, (S)tandard, or (D)rone: ";
    cin >> temp;
    shipMethod = check_ship_method(temp);
	display();
	temp = 'N';
	cout << "\n Do you want to change the location? (Y)/(N): ";
	cin >> temp;
	if(temp == 'Y')
    {
        change_destination();
    }
    
    temp = 'N';
    cout << "\n Do you want to add another package? (Y)/(N): ";
    cin >> temp;
    
	if(temp == 'Y')
    {
        read();
    }
}
void package::display() const
{
	cout << "\nName on package: " << name << endl << 
		"Destination: " << destination << endl <<
		"PackageID: "  << packageID << endl <<
		"Ship Method: " << shipMethod << endl << endl;

 	cout << "Height: " << height << " in" << endl <<
 		"Width: " << _width << " in" <<endl <<
 		"Depth: " << depth << " in" <<endl <<
 		"Volume: " << volume << " in^3" <<endl;
}
void package::change_destination()
{
   	const char * locations[] = {"Seattle", "Bellevue", "Spokane", "Vancouver", "Tacoma",
							"Redmond", "Olympia", "Everett", "Yakima", "Bellingham",
							"Portland", "Salem", "Eugene", "Bend", "Medford",
							"Beaverton", "Corvallis", "Hillsboro", "Ashland", "Clackamas"};
	bool flag = 0;
	char response[100];
	char *temp;
	cout << "\nNew Location: ";
	cin >> response;
	cin.ignore(100,'\n');
	destination = new char[strlen(response)+1];
	strcpy(destination,response);
	for(int i = 0; i < 20;++i)
    {
        temp = new char[strlen(locations[i])+1];
        strcpy(temp,locations[i]);
        if(!strcmp(destination,temp))
        {
            flag = 1;
        }
       
    };
    if(!flag)
    {
        cerr << "[ERROR]: Location does not exist.\n";   
        change_destination();
    }


}
int package::getID()
{
    return packageID;
}
