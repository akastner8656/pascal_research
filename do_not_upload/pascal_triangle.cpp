#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
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
	
	for (numRows=0; numRows < 100; numRows++) //# of Katie's triangle rows displayed
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

//Even though the limit of the difference rate approaches zero, the difference doesn't ap
