// This program implements a Rectangle class.
#include <iostream>
using namespace std;

// Rectangle class declaration
class Rectangle
{
	private:
		double length;
		double width;
	public:
		void setLength(double);
		void setWidth(double);
		double getLength();
		double getWidth();
		double getArea();
};

// Member function implementation section

/********************************************************************
 *                     Rectangle::setLength                         *
 * This function sets the value of the member variable length.      *
 * If the argument passed to the function is zero or greater, it is *
 * copied into length. If it is negative, 1.0 is assigned to length.*
 ********************************************************************/
void Rectangle::setLength(double len)
{
	if (len >= 0.0)
		length = len;
	else
	{	length = 1.0;
		cout << "Invalid length. Using a default value of 1.0\n";
	}
}

/********************************************************************
 *                      Rectangle::setWidth                         *
 * This function sets the value of the member variable width.       *
 * If the argument passed to the function is zero or greater, it is *
 * copied into width. If it is negative, 1.0 is assigned to width.  *
 ********************************************************************/
void Rectangle::setWidth(double w)
{
	if (w >= 0.0)
		width = w;
	else
	{	width = 1.0;
		cout << "Invalid width. Using a default value of 1.0\n";
	}
}

/**************************************************************
 *                     Rectangle::getLength                   *
 * This function returns the value in member variable length. *
 **************************************************************/
double Rectangle::getLength()
{
	return length;
}

/**************************************************************
 *                     Rectangle::getWidth                    *
 * This function returns the value in member variable width.  *
 **************************************************************/
double Rectangle::getWidth()
{
	return width;
}

/*******************************************************************
 *                        Rectangle::getArea                       *
 * This function calculates and returns the area of the rectangle. *
 *******************************************************************/
double Rectangle::getArea()
{
	return length * width;
}

/*************************************************************
 *                            main                           *
 *************************************************************/
int main()
{
	Rectangle box;         // Declare a Rectangle object
	double boxLength, boxWidth;

	//Get box length and width
	cout << "This program will calculate the area of a rectangle.\n";
	cout << "What is the length? ";
	cin  >> boxLength;
	cout << "What is the width? ";
	cin  >> boxWidth;

	// Call member functions to set box dimensions 
	box.setLength(boxLength);
	box.setWidth(boxWidth);

	// Call member functions to get box information to display
	cout << "\nHere is the rectangle's data:\n";
	cout << "Length: " << box.getLength() << endl;
	cout << "Width : " << box.getWidth()  << endl;
	cout << "Area  : " << box.getArea()   << endl;
	return 0;
}
