// This program uses the Rectangle class. 
// The Rectangle class declaration is in file Rectangle.h. 
// The Rectangle member function definitions are in Rectangle.cpp
// These 3 files should all be combined into a project.
#include <iostream>
#include "Rectangle.h"         // Contains Rectangle class declaration
using namespace std;

int main()
{
	Rectangle box;             // Declare a Rectangle object
	double boxLength, boxWidth;

	//Get box length and width
	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length? ";
	cin  >> boxLength;
	cout << "What is the width? ";
	cin  >> boxWidth;

	// Call member functions to set box dimensions.
	// If the function call returns false, it means the
	// argument sent to it was invalid and not stored. 
	if (!box.setLength(boxLength))               // Store the length
		cout << "Invalid box length entered.\n";
	else if (!box.setWidth(boxWidth))            // Store the width
		cout << "Invalid box width entered.\n";
	else                                         // Both values were valid
	{
		// Call member functions to get box information to display
		cout << "\nHere is the rectangle's data:\n";
		cout << "Length: " << box.getLength() << endl;
		cout << "Width : " << box.getWidth()  << endl;
		cout << "Area  : " << box.getArea()   << endl;
	}
	return 0;
}
