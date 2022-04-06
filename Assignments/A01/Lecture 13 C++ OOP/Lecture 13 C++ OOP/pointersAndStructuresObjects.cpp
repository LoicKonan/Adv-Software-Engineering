// This program uses pointers to dynamically allocate 
// structures and class objects.
#include <iostream>
#include <string>
using namespace std;

// Gradelist structure
struct GradeList
  { int courseNum;
    int * grades;
  };

int main()
{
		GradeList test1; 
		GradeList *testPtr = &test1;
		int x = 3;
		cout << "The address of x is: " << &x <<endl;
		cout << "&test1: " << &test1 << endl;
		cout << "testPtr: " << testPtr << endl;
		cout << "====================================" <<endl;
		cout << "This is for INT member variable coursenum " <<endl;
		testPtr->courseNum = 5;  // SAME AS (*testPtr).courseNum:

		cout << "testPtr->courseNum: " << testPtr->courseNum << endl;
		cout << "(*testPtr).courseNum: " << (*testPtr).courseNum << endl;
		cout << "..................." <<endl;
		(*testPtr).courseNum = 15;  // SAME AS testPtr->courseNum = 5;

		cout << "testPtr->courseNum: " << testPtr->courseNum << endl;
		cout << "(*testPtr).courseNum: " << (*testPtr).courseNum << endl;
		cout << "====================================" <<endl;		

		cout << "====================================" <<endl;
		cout << "This is for POINTER TO INT - member variable grades " <<endl;
		testPtr->grades = &x;  // SAME AS (*testPtr).grades:

		cout << "testPtr->grades: " << testPtr->grades << endl;
		cout << "(*testPtr).grades: " << (*testPtr).grades << endl;
		cout << "..................." <<endl;
		*testPtr->grades;  // SAME AS *(*testPtr.grades):
		cout << "*testPtr->grades: " << *testPtr->grades << endl;
		cout << "*(*testPtr).grades: " << *(*testPtr).grades << endl;

		*testPtr->grades = 300;  
		cout << "*testPtr->grades: " << *testPtr->grades << endl;
		cout << "*(*testPtr).grades: " << *(*testPtr).grades << endl;
		cout << "====================================" <<endl;
		cout << "This is for POINTER TO INT - member variable grades " <<endl;
		testPtr->grades = &x;  // SAME AS (*testPtr).grades:

		cout << "*test1.grades: " << *test1.grades << endl;
		cout << "test1.grades: " << test1.grades << endl;
		cout << "====================================" <<endl;

    return 0;
}

