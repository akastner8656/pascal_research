#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double numRows = 0;
	int m;
	int numerator = 0;
	int denominator = 0;
	double overallValue;
	int powerNumerator;
	int powerDenominator;
	
	for (numRows=0; numRows < 30; numRows++) //# of Katie's triangle rows displayed
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
		cout << endl;
		m = 0;
	}
}
