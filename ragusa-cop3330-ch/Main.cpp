#include "Header.h"
int main()
{
	int a;
	cout << "Enter a number to determine if it is even or odd: ";
	cin >> a;


	string result=isOddEven(a);
	
	cout << "The number " << a;
	cout << " is " << result;
	cout << ".";

	return 0;
}

string isOddEven(int a)
{
	if (a % 2 == 0)
	{
		return "even";
	}
	else
		return "odd";
}
