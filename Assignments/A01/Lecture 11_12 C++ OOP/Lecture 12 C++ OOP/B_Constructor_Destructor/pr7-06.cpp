// This program demonstrates the use of overloaded constructors.
#include <iostream>
#include <iomanip>
using namespace std;

// Sale class declaration
class Sale
{
 private:
   double taxRate;

 public:
	 Sale(double rate)        // Constructor with 1 parameter
	 {	taxRate = rate;       // handles taxable sales
	 }

	 Sale()                   // Default constructor  
	 {	taxRate = 0.0;        // handles tax-exempt sales
	 }

	 double calcSaleTotal(double cost)
	 {	double total = cost + cost*taxRate; 
		return total;
	 }
};

int main()
{  
	Sale cashier1(.06);       // Define a Sale object with 6% sales tax
	Sale cashier2;            // Define a tax-exempt Sale object

	// Format the output
	cout << fixed << showpoint << setprecision(2);
	
	// Get and display the total sale price for two $24.95 sales
	cout << "With a 0.06 sales tax rate, the total\n";
	cout << "of the $24.95 sale is $";
	cout << cashier1.calcSaleTotal(24.95) << endl;
	
	cout << "\nOn a tax-exempt purchase, the total\n";
	cout << "of the $24.95 sale is, of course, $";
	cout << cashier2.calcSaleTotal(24.95) << endl;
	return 0;
}
