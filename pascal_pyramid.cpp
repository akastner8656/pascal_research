#include <iostream>

using namespace std;

int main()
{
	int lastRow;
	
	cout << "How many rows do you want to produce?";
	cin >> lastRow;
	
	for (int columnNumber = 0; columnNumber < lastRow; columnNumber++)
	{
		lastRowColumnPlaceholder =
		 //code to produce the columnNumber's value at lastRow of Pascal's triangle
		
		for (int rowNumber = 0; rowNumber < lastRow; rowNumber++)
		{
			pascalTriangleValue = 
			//code to produce columnNumber's value at rowNumber of Pascal's triangle
			for (int columnNumberInRow = 0; columnNumberInRow <= rowNumber; columnNumberInRow++)
			{
				pascalPyramidValue = LastRowColumnPlaceholder * pascalTriangleValue;
			}
		}
	}
}

//This is a skeleton of the process used to create Pascal's pyramid.

//Any rowNumber in Pascal's triangle will be multiplied by a term in the lastRow of Pascal's triangle.
//This term is equal to the rowNumber being altered.

//Example: Row 6 of Pascal's triangle will be multiplied by the sixth term of the last row
//in Pascal's triangle.  If the last row produced was row 16, the sixth term of row 16 would
//be the scalar that multiplies into every element of row 6.
