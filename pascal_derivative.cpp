#include <iostream>
#include <iomanip>

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
	

	for (numRows; numRows < 2; numRows++)
	{
		for (m = 0; m <= numRows; m++)
		{
			eachValue = (-numRows-2)/((m+1)^2);
			totalValue = totalValue + eachValue;
			if ((static_cast<int>(numRows) % 2) == 0)
			{
				totalFirstValue = totalValue;
			}
			else
			{
				totalSecondValue = totalValue;
			}
		}
		if (numRows == 0)
		{
			cout << "ROW #       Values       Difference" << endl;
			cout << setprecision(0) << numRows << "           " << setprecision(5) << fixed << totalValue << "      1" << endl;
		}
		else
		{
			if ((m % 2) != 0)
			{
				difference = totalFirstValue - totalSecondValue;
			}
			else if ((m % 2) == 0)
			{
				difference = totalSecondValue - totalFirstValue;
			}
			if (numRows <= 4)
			{
			cout << setprecision(0) << numRows << "           " << setprecision(5) << fixed << totalValue << "      " << difference << endl;
			}
			else if (numRows <=9)
			{
			cout << setprecision(0) << numRows << "           " << setprecision(5) << fixed << totalValue << "     " << difference << endl;			
			}
			else if (numRows <=30)
			{
			cout << setprecision(0) << numRows << "          " << setprecision(5) << fixed << totalValue << "     " << difference << endl;
			}
			else
			{
			cout << setprecision(0) << numRows << "          " << setprecision(5) << fixed << totalValue << "    " << difference << endl;
			}
		}
			totalValue = 0;
	}
}
