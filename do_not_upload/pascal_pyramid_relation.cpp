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
	double n = 3;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	cout << endl << endl << endl << endl;
	
	for (rowNumber = 0; rowNumber < userInput; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber; colNumber++)
		{			
			if (colNumber == 0)
			{
				firstValueInRow = (rowNumber + 3) * (rowNumber + 2); //problem
				cout << firstValueInRow / pascalValue << " ";
			}
			else
			{
				katieTriangleMultiplier = (rowNumber - colNumber + 1) / (colNumber);
				pascalValue = pascalValue * katieTriangleMultiplier;
				multiplier = (rowNumber - colNumber + 2) / (colNumber + 1);
				otherValuesInRow = firstValueInRow * multiplier;
				firstValueInRow = otherValuesInRow;
				cout << otherValuesInRow / pascalValue << " ";
			}
		}
		colNumber = 0;
		pascalValue = 1;
		cout << endl << endl;
	}
}
