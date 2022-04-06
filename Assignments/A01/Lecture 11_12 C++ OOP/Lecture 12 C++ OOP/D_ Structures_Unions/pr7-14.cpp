// This program demonstrates the use of a nested structure. 
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct CostInfo
{	
   double food,      // Food costs
          medical,   // Medical costs
          license,   // License fee
          misc;      // Miscellaneous costs
};

struct PetInfo
{
   string name;      // Pet name
   string type;      // Pet type
   int    age;       // Pet age
	
   CostInfo cost;    // A PetInfo structure has a CostInfo structure
                     // nested inside as one of its members
   
   PetInfo()         // Default constructor
   {  name = "unknown";
      type = "unknown";
	  age = 0;
	  cost.food = cost.medical = cost.license = cost.misc = 0.00;
   }
};

int main()
{
   // Define a PetInfo structure variable called pet
   PetInfo pet; 
	
   // Assign values to the pet member variables.    
   // Notice that cost.misc is not assigned a value,
   // so it remains 0, as set by the constructor.   
   pet.name = "Sassy";
   pet.type = "cat";
   pet.age = 5;
   pet.cost.food = 300.00;
   pet.cost.medical = 200.00;
   pet.cost.license = 7.00;
  
   // Display the total annual costs for the pet
   cout << fixed << showpoint << setprecision(2);
   cout << "Annual costs for my " << pet.age << "-year-old "
        << pet.type << " " << pet.name  << " are $"
        << (pet.cost.food + pet.cost.medical + 
            pet.cost.license + pet.cost.misc) << endl;
   return 0;
}
