// This program has one function that receives a structure variable
// as an argument and another that returns a structure variable.  
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct InvItem                  // Holds data for an inventory item
{
	int partNum;                // Part number
	string description;         // Item description
	int onHand;                 // Units on hand
	double price;               // Unit price
};

// Function prototypes
InvItem getItemData();          // Function getItemData returns
                                // an InvItem structure. 

void showItem(const InvItem &); // Function showItem receives an
                                // InvItem structure as an argument.

int main()
{
	InvItem part ;              // Define an InvItem structure variable.
	                            
	part = getItemData();      
	showItem(part);      
	return 0;
}

/***************************************************************
 *                        getItemData                          *
 * This function stores data input by the user in the members  *
 * of a local InvItem structure variable and then returns it.  *
 * *************************************************************/
InvItem getItemData()    
{                              
	InvItem item;               // Create a local InvItem variable
	                            // to hold data until it can be returned.
	cout << "Enter the part number: ";
	cin  >> item.partNum;
	cout << "Enter the part description: ";
	cin.get();                  // Move past the '\n' left in the
	                            // input buffer by the last input.
	getline(cin, item.description);
	cout << "Enter the quantity on hand: ";
	cin  >> item.onHand;
	cout << "Enter the unit price: ";
	cin  >> item.price;

	return item;
}

/**********************************************************
 *                       showItem                         *
 * This function displays the data stored in the members  *
 * of an InvItem structure variable passed to it.         *
 * ********************************************************/
void showItem(const InvItem &item)
{
	cout << fixed << showpoint << setprecision(2) << endl;;
	cout << "Part Number  : "  << item.partNum << endl;
	cout << "Description  : "  << item.description << endl;
	cout << "Units On Hand: "  << item.onHand << endl;
	cout << "Price        : $" << item.price << endl;
}
