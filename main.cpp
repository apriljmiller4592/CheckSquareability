#include <iostream>
#include <math.h>

using namespace std;

//Function prototype
void root(int x);

//Exception - Thrown if number does not have a perfect square
struct ArithmeticException : public std::exception
{
	const char *errorMessage() const throw ()
    {
    	return " DOES NOT have a perfect square";
    }
};

//Main method
int main() 
{
  //rooting i
	for(int i = 0 ; i < 26; i++)
	{
		root(i);
	}
	return 0;
}

//Check if nunber has a square root. Throw error message if not.
void root(int x)
{
 	cout << x;
	try
	{	
		if(sqrt(x) != (int)sqrt(x))
		{
			throw ArithmeticException();
		}
		cout<< " DOES have a perfect square " <<endl;
	}
  //Throw exception if num does not have a square root
	catch(ArithmeticException& e)
	{
		cout << e.errorMessage() << endl;
	}
}