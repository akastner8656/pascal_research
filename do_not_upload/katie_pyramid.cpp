#include <iostream>

using namespace std;

int main()
{
	double katiePyramidNumerator;
	double katiePyramidDenominator;
	double colNumber;
	double rowNumber;
	int userInput;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	
	for (rowNumber = 1; rowNumber < userInput + 2; rowNumber++)
	{
		for (colNumber = 1; colNumber <= rowNumber - 1; colNumber++)
		{			
			katiePyramidNumerator = (rowNumber - colNumber + 1) ;
			katiePyramidDenominator = (colNumber + 1);

				
			if ((static_cast<int>(colNumber - 1) % 5) == 0)
			{
				cout << endl;
			}
			cout << "( "<< katiePyramidNumerator << " / " << katiePyramidDenominator << " ) ";
		}
		colNumber = 0;
		cout << endl << endl;
	}
}
