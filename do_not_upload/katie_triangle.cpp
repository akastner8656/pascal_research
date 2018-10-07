#include <iostream>

using namespace std;

int main()
{
	double katieTriangleNumerator;
	double katieTriangleDenominator;
	double colNumber;
	double rowNumber;
	int userInput;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	
	for (rowNumber = 1; rowNumber < userInput + 1; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber - 1; colNumber++)
		{			
			katieTriangleNumerator = (rowNumber - colNumber);
			katieTriangleDenominator = (colNumber + 1);

			if ((static_cast<int>(colNumber) % 5) == 0)
			{
				cout << endl;
			}
			cout << "( "<< katieTriangleNumerator << " / " << katieTriangleDenominator << " ) ";				
		}
		colNumber = 0;
		cout << endl << endl;
	}
}
