#include <iostream>

using namespace std;

int main()
{
	double multiplier;
	double otherValuesInRow;
	double colNumber;
	double rowNumber;
	double firstValueInRow;
	int userInput;
	
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
				cout << multiplier << " ";
			}
			else
			{
				cout << endl;
			}
		}
		colNumber = 0;
		cout << endl << endl;
	}
}
