// This program demonstrates a union.
#include <iostream>
#include <iomanip>
using namespace std;

union PaySource              // Declare a union 
{
	short hours;             // These two variables share 
	float sales;             // the same memory space 
}; 

int main()
{
	const double COMMISSION_PCT = .10;
	
	PaySource employee1;     // employee1 is a PaySource union   
                             // This employee can have hours or 
	                         // sales, but not both at once 

	char  hourlyType;        // 'y' if hourly, 'n' if on commission
	float payRate, grossPay;

	cout << fixed << showpoint << setprecision(2);
	cout << "This program calculates either hourly wages or "
	     << "sales commission.\n";
	cout << "Is this an hourly employee (y or n)? ";
	cin  >> hourlyType;

	if (hourlyType == 'y' || hourlyType == 'Y')   // Hourly employee 
	{
		cout << "What is the hourly pay rate? ";
		cin  >> payRate;
		cout << "How many hours were worked? ";
		cin  >> employee1.hours;
		grossPay = employee1.hours * payRate;
		cout << "Gross pay: $" << grossPay << endl;
	}
	else                                      // Commission employee 
	{
		cout << "What are the total sales for this employee? ";
		cin  >> employee1.sales;
		grossPay = employee1.sales * COMMISSION_PCT;
		cout << "Gross pay: $" << grossPay << endl;
	}
	return 0;
}
