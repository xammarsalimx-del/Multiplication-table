#include <iostream>
using namespace std ;
int main()
{
	int num1 ,i;
	cout << "Enter the number you need to calculate Multiplication table for it : ";
	cin >> num1;
	for (i = 1; i <= 12; i++ )
	{
		cout << num1<<"*" << i<< "="<< num1 *i<< "\n";
	}
}