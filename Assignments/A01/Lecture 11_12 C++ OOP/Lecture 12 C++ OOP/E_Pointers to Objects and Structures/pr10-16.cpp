// This program uses pointers to dynamically allocate 
// structures and class objects.
#include <iostream>
#include <string>
using namespace std;

// Person class
class Person
{
private:
    string name;
    int  age;
public:
    Person(string name1, int age1)
    {
        name = name1;
        age = age1;
    }   
    int getAge() { return age; }
    string getName(){ return name; }
};

// Rectangle structure
struct Rectangle
{
    int width, height; 
};

int main()
{
    Rectangle *pRect;    // Pointer to Rectangle
    Person *pPerson;     // Pointer to Person

    // Create a rectangle object and access it through a pointer
    Rectangle rect;
    pRect = &rect;
    (*pRect).height = 12;
    pRect->width = 10;
    cout << "Area of the first rectangle is " 
         << pRect->width * pRect->height;

    // Allocate a Rectangle object and access it through a pointer
    pRect = new Rectangle;
    pRect->height = 6;
    pRect->width = 5;
    cout << "\nArea of the second rectangle is " 
         << pRect->width * pRect->height;

    // Allocate a Person object and call its methods through a pointer
    pPerson = new Person("Miquel E. Gonzalez", 23);
    cout << "\n\nThe person's name is " << pPerson->getName();
    cout << "\nThe person's age is " << pPerson->getAge() << endl;

    return 0;
}

