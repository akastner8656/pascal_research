#include <iostream>

using namespace std;

int main()
{
	double multiplier;
	double otherValuesInRow;
	double colNumber;
	double rowNumber;
	double firstValueInRow;
	double katieTriangleMultiplier;
	int userInput;
	double pascalValue = 1;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	cout << endl << endl << endl << endl;
	
	for (rowNumber = 3; rowNumber < userInput + 3; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber - 3; colNumber++)
		{			
			if (colNumber == 0)
			{
				firstValueInRow = rowNumber * (rowNumber - 1);
				cout << firstValueInRow << " ";
			}
			else if (colNumber < rowNumber)
			{
				multiplier = (rowNumber - colNumber - 1) / (colNumber + 1);
				otherValuesInRow = firstValueInRow * multiplier;
				firstValueInRow = otherValuesInRow;
				cout << otherValuesInRow << " ";
			}
			else
			{
				cout << endl;
			}
		}
		colNumber = 0;
		cout << endl << endl;
	}
for (rowNumber = 0; rowNumber < userInput; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber; colNumber++)
		{			
			if (colNumber == 0)
			{
				cout << pascalValue << " ";
			}
			else
			{
				katieTriangleMultiplier = (rowNumber - colNumber + 1) / (colNumber);
				pascalValue = pascalValue * katieTriangleMultiplier;
				cout << pascalValue << " ";
			}
		}
		pascalValue = 1;
		colNumber = 0;
		cout << endl << endl;
	}
}