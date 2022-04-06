/*
                     IMPORTANT CONSTRUCTOR CONCEPTS for 1063
Original File: pr7-06.cpp
Feel free to add additional entries, examples and testing cases in order to enhance the file and set of examples/concepts 
that a CMPS 1063 student should be aware of.
Name		Last Name			Version				Date				Entries
Eduardo		Colmenares			Version 1			09/18/2018			1,2,3,4(A,B)

Testing Cases a.k.a questions

1)  Can I have two default constructors in a class? 
Answer: NO
Testing case: Use all constructors A, B and C. You will see that C++ will not compile

2) Are A and B default constructors?
Answer: YES
Testing case: comment out either A or B, keep C and compile

3) If I use only constructors B and C, can I change the header of B from Sale(int r = 0.06) to Sale(double r = 0.06) 
Answer: NO. This will not work because both constructors will have the same signature and the compiler will not be able 
to determine which one to use.

4) If I remove both Constructors (A,B) and I leave only C which is not a default constructor, will my code compile?
Answer: It depends, let's look at the options
4 - OPTION A) if all the objects in you program are created this way --> cashier1(some value here), then it will 
work because you are using the only existing parameterized constructor

4 - OPTION B) if ONLY ONE object in your program is being created this way -->  cashier1, then it will fail because there is no
default constructor to take care of such case. Once the user defines a user defined constructor C++ will not longer
provide a default one. REALLY ? YES
Testing: comment out the following lines
     a) All constructors (default and not default)
	 b) Sale cashier1(.1);
	 c) cout << cashier1.calcSaleTotal(24.95) << endl;
	 d) COMPILE AND EXECUTE
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Sale class declaration
class Sale
{
 private:
   double taxRate;

 public:

	 /* Constructor A - This is a Default constructor */
	 /* Sale()                    
	 {	taxRate = 0.0;      // handles tax-exempt sales
	 } */
	 
	 /* Constructor B - This is also a default constructor (Book Page 428) */
	 Sale(int rate = 0.06)         
	 {                         			
		 taxRate = rate;
	 }

	 /* Constructor C  This is Constructor with 1 parameter (NOT a Default Constructor - Book Page 427) */
	 Sale(double rate)        
	 {	
		 taxRate = rate;       // handles taxable sales
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
