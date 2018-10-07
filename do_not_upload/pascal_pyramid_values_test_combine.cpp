#include <iostream>
#include <iomanip>
using namespace std;

//This code will produce any interior triangle of Pascal's pyramid with any number of rows.
//Pascal's pyramid from the outside is composed of three identical triangles, with an interior pyramid inside.
//When those triangles are stripped, there is yet another interior pyramid composed of three indentical triangles.
//This process can be repeated indefinitely.

int main()
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
	double numeratorTopValue = 1;
	double numeratorBottomValue = 1;
	double denominatorValue = 1;
	double factorial;
	double numeratorValue;
	double pascalValue;
	double x_coordinate;
	double y_coordinate;
	double pascalValueWithMultiplier;
	double rowCoordinate;
	double colCoordinate;
	int multiplier = 1;
	double katieTriangleMultiplier;
	double pascalMultiplier;
	double pascalMultiplierTop;
	double pascalMultiplierBottom;
	double multiplierTop = 1;
	double multiplierBottom = 1;
	double katieTriangleMultiplierTop;
	double katieTriangleMultiplierBottom;
	string answer;
	int numberTrianglesWanted;
	bool checkForYesNo;
	bool menuSelection;
	
	while (menuSelection == false)
	{
		cout << "Would you like multiple triangles produced at once?  Y or N" << endl;
		cin >> answer;
		
		if (answer == "Y" || answer == "y")
		{
			checkForYesNo = true;
			menuSelection = true;
		}
		else if (answer == "N" || answer == "n")
		{
			checkForYesNo = false;
			menuSelection = true;
		}
		else
		{
			cout << "Invalid input.  Please select either Y or N." << endl << endl;
		}
	}
	if (checkForYesNo == true)
	{
		cout << "Please enter the number of triangles wanted, starting from triangle 1. ";
		cin >> numberTrianglesWanted;
		
		cout << "Please enter how many rows wanted for every triangle. ";
		cin >> rowsProduced;
		cout << endl << endl;
		
		triangleNumber = 1;
	}
	else if (checkForYesNo == false)
	{
		cout << "Please enter the triangle number wanted. ";
		cin >> triangleNumber;
		
		cout << "Please enter how many rows wanted. ";
		cin >> rowsProduced;
		cout << endl << endl;
		
		numberTrianglesWanted = triangleNumber;
	}
	
	{
		for (triangleNumber; triangleNumber <= numberTrianglesWanted; triangleNumber++)
		{
			/*																					//This can be used if varying numbers of rows are wanted per triangle.
			cout << "Please enter how many rows wanted. ";
			cin >> rowsProduced;
			cout << endl << endl;
			*/
	
			cout << "TRIANGLE NUMBER " << triangleNumber << endl;
			cout << "--------------------" << endl;
	
			for (rowNumber = 0; rowNumber < rowsProduced; rowNumber++) 						    //The for loop is used to create a triangle of values.
			{
				cout << "ROW NUMBER " << rowNumber << " : ";
				
				for (colNumber = 0; colNumber <= rowNumber; colNumber++)
				{
					rowCoordinate = 2 * triangleNumber + colNumber - 2; 						//To create an interior Pascal's Pyramid triangle, there are two parts in doing this.  rowCoordinate and colCoordinate are taken from Pascal's triangle.
					colCoordinate = triangleNumber - 1;                 						//Depending on the triangle and column number, a coefficient is spit out.
			
					diagonalNumber = colNumber + 1; 											//diagonalNumber represents the diagonals of Pascal's triangle (or any triangle).
					elementNumber = rowNumber - colNumber + 1; 									//elementNumber represents the element number in any of Pascal's triangle diagonals.
			
					numeratorTop = elementNumber + (3 * triangleNumber) + diagonalNumber - 5;   //This is the second part of Pascal's Pyramid generation.
					numeratorBottom = elementNumber + triangleNumber - 2;                       //numeratorTop, numeratorBottom, and denominator will be put in a factorial loop.
					denominator = (2 * triangleNumber) + diagonalNumber - 3; 
			
					if (colCoordinate == 0)
					{
						pascalMultiplier = 1;
					}
					else
					{
						for (int y = 1; y <= colCoordinate; y++) 								//The integer y is used purely to keep track of Pascal's value at any given row.
						{
							katieTriangleMultiplierTop = (rowCoordinate - y + 1);			    //katieTriangleMultiplier is used to create the next value in any given row.
							katieTriangleMultiplierBottom = y;
							multiplierTop = multiplierTop * katieTriangleMultiplierTop;			//Split up top and bottom so that rounding does not become an issue.
							multiplierBottom = multiplierBottom * katieTriangleMultiplierBottom;
							pascalMultiplierTop = multiplierTop; 										//pascalMultiplier will take values from Pascal's triangle and multiply them by the main equation.
							pascalMultiplierBottom = multiplierBottom;
							//cout << multiplierTop << " " << multiplierBottom << endl;			//Test to see if there is an issue with rounding.
						}
						pascalMultiplier = pascalMultiplierTop / pascalMultiplierBottom;
						multiplierTop = 1;
						multiplierBottom = 1;
					}
					
					if (numeratorTop == 0)														//0 factorial is 1.  The computer cannot recognize this, so an if else statement makes this easy.
					{
						numeratorTopValue = 1;
					}
					else
					{
						for (factorial = 1; factorial <= numeratorTop; factorial++)			    //This for loop is acting like a factorial would.
						{
							numeratorTopValue = numeratorTopValue * factorial;
						}
					}
			
					if (numeratorBottom == 0)												    //The process is repeated.
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
					//cout << numeratorTopValue << " " << numeratorBottomValue << " " << denominatorValue << endl;             //Test to see if the second half calculations are correct.
					//cout << pascalMultiplier << endl;
					numeratorValue = numeratorTopValue / numeratorBottomValue;				    //The second half of the equation is being calculated here.
					pascalValue = numeratorValue / denominatorValue;
					pascalValueWithMultiplier = pascalValue * pascalMultiplier;                 //Both halves of the equation are being multiplied here to create a single value at pascalValueWithMultiplier.
					cout << fixed << setprecision(0) << pascalValueWithMultiplier << " ";
						
					numeratorTopValue = 1;												        //The variables in the for loops are being reset here.
					numeratorBottomValue = 1;
					denominatorValue = 1;
				}
				cout << endl << endl;
			}
		}
	}
}
