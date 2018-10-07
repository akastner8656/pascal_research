#include <iostream>

using namespace std;

int main()
{
	double katiePyramidNumerator;
	double katiePyramidDenominator;
	double katieTriangleNumerator;
	double katieTriangleDenominator;
	double katieDifferenceNumerator;
	double katieDifferenceDenominator;
	double katieFirstDifference;
	double katiePyramidValue;
	double katieTriangleValue;
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
			katieTriangleNumerator = (rowNumber - colNumber);
			katieTriangleDenominator = (colNumber);
			
			katiePyramidValue = katiePyramidNumerator / katiePyramidDenominator;
			katieTriangleValue = katieTriangleNumerator / katieTriangleDenominator;
			katieFirstDifference = katiePyramidValue / katieTriangleValue;
				
			if ((static_cast<int>(colNumber - 1) % 5) == 0)
			{
				cout << endl;
			}
			cout << katieFirstDifference << " ";
		}
		colNumber = 0;
		cout << endl << endl;
	}
}
//interestingly enough, if you take the numerators of both minus the denominators of both,
//then the results will all be 1.
