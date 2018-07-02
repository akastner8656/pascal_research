#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double pascalTriangle();
double pascalDerivative();
double katieTriangle();
double pascalPyramid();
double katiePyramid();
double travisTriangle();
double pascalSumsAndDifferences();
double katiePyramidOverTriangle();

int main()
{
	
	int interfaceInput;
	
	cout << "Please choose the triangle you want to view from this list." << endl  << endl;
	cout << "1   Pascal's Triangle" << endl; //done
	cout << "2   Pascal's Derivative" << endl; //NEEDS WORK
	cout << "3   Katie's Triangle" << endl; //done
	cout << "4   Pascal's Pyramid" << endl; //done
	cout << "5   Katie's Pyramid" << endl; //done
	cout << "6   Travis's Triangle" << endl; //done
	cout << "7   Pascal's Sums and Differences" << endl; //done
	cout << "8   Katie's Pyramid / Katie's Triangle" << endl << endl; //mostly done
	cin >> interfaceInput;
	cout << endl;
	
	while (interfaceInput < 1 || interfaceInput > 8)
	{
		cout << "Invalid input.  Please select a triangle from the list." << endl << endl;
		cout << "1   Pascal's Triangle" << endl;
		cout << "2   Pascal's Derivative" << endl;
		cout << "3   Katie's Triangle" << endl;
		cout << "4   Pascal's Pyramid" << endl;
		cout << "5   Katie's Pyramid" << endl;
		cout << "6   Travis's Triangle" << endl;
		cout << "7   Pascal's Sums and Differences" << endl;
		cout << "8   Katie's Pyramid / Katie's Triangle" << endl << endl;
		cin >> interfaceInput;
		cout << endl;
	}
	
	switch (interfaceInput)
	{
		case 1: pascalTriangle(); break;
		case 2: pascalDerivative(); break;
		case 3: katieTriangle(); break;
		case 4: pascalPyramid(); break;
		case 5: katiePyramid(); break;
		case 6: travisTriangle(); break;
		case 7: pascalSumsAndDifferences(); break;
		case 8: katiePyramidOverTriangle(); break;
	}
}

double pascalTriangle()
{
	double katieTriangleMultiplier;
	double colNumber;
	double rowNumber;
	int userInput;
	double pascalValue = 1;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	
	for (rowNumber = 0; rowNumber < userInput + 1; rowNumber++)
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

double pascalDerivative()
{
	cout << "This triangle has not been constructed yet.  Please select a different option.";
}

double katieTriangle()
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

double pascalPyramid()
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
}
double katiePyramid()
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

double travisTriangle()
{
	double numRows = 0;
	int m;
	int numerator = 0;
	int denominator = 0;
	double overallValue;
	int powerNumerator;
	int powerDenominator;
	int userInput;
	
	cout << "How many lines would you like to produce?" << endl;
	cin >> userInput;
	
	for (numRows=0; numRows < userInput + 2; numRows++) //# of Katie's triangle rows displayed
	{
		for (m = 0; m <= numRows; m++)
		{
			numerator = numRows - m + 1;
			denominator = m + 1;
			powerNumerator = pow (numerator, 6) - 2 * pow(numerator, 4) + pow(numerator, 2);
			powerDenominator = pow (denominator, 6) - 2 * pow(denominator, 4) + pow(denominator, 2);
			if ((static_cast<int>(m - 1) % 3) == 0)
			{
				cout << endl;
			}
			
			if (powerNumerator == 0 )
			{
				overallValue = 0;
			}
			else if (powerDenominator == 0)
			{
				overallValue = 0;
			}
			else
			{
				cout << "( " << powerNumerator << " / "<< powerDenominator << " ) ";
			}
		}
		cout << endl;
		cout << endl;
		m = 0;
	}
}

double pascalSumsAndDifferences()
{
	double numRows = 0;
	double n;
	double totalValue;
	double eachValue;
	int m = 0;
	double difference;
	double totalFirstValue = 0;
	double totalSecondValue = 0;
	double differenceOne = 0;
	double differenceTwo = 0;
	double differenceRate;
	int userInput;
	
	cout << "How many row sums and differences would you like to produce?" << endl;
	cin >> userInput;
	cout << endl << endl << endl << endl;
	
	for (numRows=0; numRows < userInput; numRows++) //# of Katie's triangle rows displayed
	{
		for (m = 0; m <= numRows; m++)
		{
			eachValue = ((numRows-m)+1)/(1+m); //formula for sum of every row
			totalValue = totalValue + eachValue;
			if ((static_cast<int>(numRows) % 2) == 0) //If row is even, sum is set to totalFirstValue
			{
				totalFirstValue = totalValue;
			}
			else //If row is odd, sum is set to totalSecondValue
			{
				totalSecondValue = totalValue;
			}
		}
		if (numRows == 0) //The first row has no previous difference, and is set to its own section
		{
			cout << "ROW #       Values       Difference      Rate of Difference Increase" << endl;
			differenceRate = totalValue;
			differenceOne = differenceRate;
			cout << setprecision(0) << numRows << "           " << setprecision(5) << fixed << totalValue << "      1" << "               " << abs(differenceRate) << endl;
		}
		else //Every other row has a previous difference, and needs computation
		{
			if ((m % 2) != 0) //This function will separate the maximum value of odd m,
			                  //take differences, and store them in differenceOne.
			{
				differenceOne = totalFirstValue - totalSecondValue;
				difference = differenceOne;
			}
			else if ((m % 2) == 0) //This function will separate the maximum value of even m,
								   //take differences, and store them in differenceTwo.
			{
				differenceTwo = totalSecondValue - totalFirstValue;
				difference = differenceTwo;
			}		
			differenceRate = differenceTwo - differenceOne;
			if (numRows <= 4) //Separated only to make the values align
			{
				cout << setprecision(0) << numRows << "           " << setprecision(5) << fixed << totalValue << "      " << difference << "         " << abs(differenceRate) << endl;
			}
			else if (numRows <=9)
			{
				cout << setprecision(0) << numRows << "           " << setprecision(5) << fixed << totalValue << "     " << difference << "         " << abs(differenceRate) << endl;	
			}
			else if (numRows <=30)
			{
				cout << setprecision(0) << numRows << "          " << setprecision(5) << fixed << totalValue << "     " << difference << "         " << abs(differenceRate) << endl;
			}
			else
			{
				cout << setprecision(0) << numRows << "          " << setprecision(5) << fixed << totalValue << "    " << difference << "         " << abs(differenceRate) << endl;
			}
		}
			totalValue = 0;
	}
}
double katiePyramidOverTriangle()
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
