#include <iostream>
using namespace std;

int main()
{
	double katieTriangleMultiplier;
	double colNumber;
	double rowNumber;
	int userInput;
	double pascalValue = 1;
	double lastRowValue;
	double pyramidValue;
	double lastRow;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	
	lastRow = (userInput - 1);
	
	for (rowNumber = 0; rowNumber < userInput; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber; colNumber++)
		{			
			katieTriangleMultiplier = (rowNumber - colNumber + 1) / (colNumber);						
			if (colNumber == 0)
			{
				pyramidValue = pascalValue * lastRowValue;
				cout << pascalValue << " ";
			}
			else
			{
				pascalValue = pascalValue * katieTriangleMultiplier;
				pyramidValue = pascalValue * lastRowValue;
				cout << pascalValue << " ";
			}
			if (rowNumber + 1 == userInput)
			{
				lastRowValue = (lastRow - colNumber + 1) / (colNumber);
				cout << lastRowValue << " ";
			}
		}
		pascalValue = 1;
		colNumber = 0;
		cout << endl << endl;
	}
}

//produce specific rows of Pascal's pyramid
