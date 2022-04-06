// This program uses a private Boolean function to determine if 
// a new value sent to it is the largest value received so far.
#include <iostream>
using namespace std;

class SimpleStat          
{
  private: 
	int largest;            // The largest number received so far  
	int sum;                // The sum of the numbers received
	int count;              // How many numbers have been received
	
	bool isNewLargest(int); // This is a private class function
	
  public:
	
	SimpleStat();           // Default constructor
	bool addNumber(int);
	double getAverage();
	
	int getLargest()
	{  return largest; }

	int getCount()
	{  return count; }
};

// SimpleStat Class Implementation Code 

/*************************************
 *  SimpleStat Default Constructor   *
 *************************************/
SimpleStat::SimpleStat()
{
	largest = sum = count = 0;
}

/*************************************
 *      SimpleStat::addNumber        *
 *************************************/
bool SimpleStat::addNumber(int num)
{   bool goodNum = true;
	if (num >= 0)            // If num is valid
	{
		sum += num;           // Add it to the sum
		count++;              // Count it
		if(isNewLargest(num)) // Find out if it is
			largest = num;     // the new largest
	}
	else                     // num is invalid
		goodNum = false;      

	return goodNum;
}

/*************************************
 *     SimpleStat::isNewLargest      *
 *************************************/
bool SimpleStat::isNewLargest(int num)
{
	if (num > largest)
		return true;
	else
		return false;
}

/*************************************
 *      SimpleStat::getAverage       *
 *************************************/
double SimpleStat::getAverage()
{  
	if (count > 0)
		return static_cast<double>(sum) / count;
	else
		return 0;
}

// Client Program

/*************************************
 *                main               *
 *************************************/
int main()
{
	int num;
	SimpleStat statHelper;

	cout << "Please enter the set of non-negative integer \n"; 
	cout << "values you want to average. Separate them with \n";
	cout << "spaces and enter -1 after the last value. \n\n";

	cin >> num;
	while (num >= 0)
	{
		statHelper.addNumber(num);
		cin >> num;
	}
	cout << "\nYou entered " << statHelper.getCount() << " values. \n";
	cout << "The largest value was " << statHelper.getLargest() << endl;
	cout << "The average value was " << statHelper.getAverage() << endl;

	return 0;
}
