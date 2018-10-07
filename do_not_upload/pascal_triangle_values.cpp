#include <iostream>
using namespace std;

int main()
{
	double katieTriangleMultiplier;
	double colNumber;
	double rowNumber;
	int userInput;
	double pascalValue = 1;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	
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
