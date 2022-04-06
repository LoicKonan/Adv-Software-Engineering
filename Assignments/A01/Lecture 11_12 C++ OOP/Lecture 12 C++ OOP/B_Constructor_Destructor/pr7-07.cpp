// This program demonstrates a destructor.
#include <iostream>
using namespace std;

class Demo
{
   public:
      Demo();       // Constructor prototype
     ~Demo();       // Destructor prototype
};

Demo::Demo()        // Constructor function definition
{  cout << "An object has just been defined, so the constructor"
        << " is running.\n";
}

Demo::~Demo()       // Destructor function definition
{  cout << "Now the destructor is running.\n"; 
}

int main()
{
   Demo demoObj;    // Declare a Demo object;

   cout << "The object now exists, but is about to be destroyed.\n";
   return 0;
}
