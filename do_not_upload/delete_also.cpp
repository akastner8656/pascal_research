#include <iostream>  //PART 2 IS FINISHED
using namespace std;

int main()
//NOTE:  PASCAL'S TRIANGLE IS ALREADY BEING PRODUCED.
//MAKE IT SO THAT PASCAL'S TRIANGLE WILL BE READ WHEN T=1.
{
	int triangleNumber;
	int diagonalNumber;
	int elementNumber;
	int rowsProduced;
	int rowNumber;
	int colNumber;
	int numeratorTop;
	int numeratorBottom;
	int denominator;
	int numeratorTopValue = 1;
	int numeratorBottomValue = 1;
	int denominatorValue = 1;
	int factorial;
	int numeratorValue;
	int pascalValue;
	int x_coordinate;
	int y_coordinate;
	int pascalValueWithMultiplier;
	int rowCoordinate;
	int colCoordinate;
	int multiplier = 1;
	double katieTriangleMultiplier;
	
	cout << "Please enter the triangle number wanted.";
	cin >> triangleNumber;
	
	cout << "Please enter how many rows wanted.";
	cin >> rowsProduced;
	
	for (rowNumber = 0; rowNumber < rowsProduced; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber; colNumber++)
		{
			rowCoordinate = 2 * triangleNumber + colNumber - 2; //correct
			colCoordinate = triangleNumber - 1; //correct
			
			diagonalNumber = colNumber + 1; //correct
			elementNumber = rowNumber - colNumber + 1; //correct
			
			numeratorTop = elementNumber + (3 * triangleNumber) + diagonalNumber - 5; //correct
			numeratorBottom = elementNumber + triangleNumber - 2; //correct
			denominator = (2 * triangleNumber) + diagonalNumber - 3; //correct
			
			if (colCoordinate == 0)
			{
				multiplier = 1;
			}
			else
			{
			katieTriangleMultiplier = (rowCoordinate - colCoordinate + 1) / (colCoordinate); //issue with the multiplier not being what it's supposed to be?
			multiplier = multiplier * katieTriangleMultiplier;
			}
			
			if (numeratorTop == 0)
			{
				numeratorTopValue = 1;
			}
			else
			{
				for (factorial = 1; factorial <= numeratorTop; factorial++)
				{
					numeratorTopValue = numeratorTopValue * factorial;
					//cout << numeratorTopValue << endl;
				}
			}
			
			if (numeratorBottom == 0)
			{
				numeratorBottomValue = 1;
			}
			else
			{
				for (factorial = 1; factorial <= numeratorBottom; factorial++)
				{
					numeratorBottomValue = numeratorBottomValue * factorial;
				}
			}

			if (denominator == 0)
			{
				denominatorValue = 1;
			}
			else
			{
				for (factorial = 1; factorial <= denominator; factorial++)
				{
					denominatorValue = denominatorValue * factorial;
				}
			}

			//cout << numeratorTopValue << " " << numeratorBottomValue << " " << denominatorValue << endl;
			numeratorValue = numeratorTopValue / numeratorBottomValue;
			pascalValue = numeratorValue / denominatorValue;
			pascalValueWithMultiplier = pascalValue * multiplier; //needs multiplier
			cout << pascalValueWithMultiplier << " ";
						
			numeratorTopValue = 1;
			numeratorBottomValue = 1;
			denominatorValue = 1;
			multiplier = 1;
			
			//cout << numeratorValue << " / " << denominatorValue << endl;
		}
		cout << endl;
	}
}
