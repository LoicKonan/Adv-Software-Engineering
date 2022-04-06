// This program demonstrates when a constructor executes.
#include <iostream>
using namespace std;

class Demo
{
 public:
	Demo()            // Constructor 
	{
		cout << "Now the constructor is running.\n";
	}
};

int main()
{
	cout << "This is displayed before the object is created.\n";
	
	Demo demoObj;    // Define a Demo object 
	
	cout << "This is displayed after the object is created.\n";
	return 0;
}
