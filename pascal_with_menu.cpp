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
	bool menuSelection;
	bool optionMenu;
	int interfaceInput;
	string anotherOption;
	
	while (menuSelection == false)
	{
		cout << "Please choose the triangle you want to view from this list." << endl  << endl;
		cout << "1   Pascal's Triangle" << endl; //done
		cout << "2   Pascal's Derivative (IN PROGRESS)" << endl; //NEEDS WORK
		cout << "3   Katie's Triangle" << endl; //done
		cout << "4   Pascal's Pyramid" << endl; //done
		cout << "5   Katie's Pyramid" << endl; //done
		cout << "6   Travis's Triangle" << endl; //done
		cout << "7   Pascal's Sums and Differences" << endl; //done
		cout << "8   Katie's Pyramid / Katie's Triangle" << endl << endl; //mostly done
		cin >> interfaceInput;
		cout << endl;
		
		if (interfaceInput >= 1 && interfaceInput <= 8)
		{
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
			
			while (optionMenu == false)
			{
				cout << "Would you like to choose another option? Y or N" << endl;
				cin >> anotherOption;
			
				if (anotherOption == "Y" || anotherOption == "y")
				{
					menuSelection = false;
					optionMenu = true;
				}
				else if (anotherOption == "N" || anotherOption == "n")
				{
					menuSelection = true;
					optionMenu = true;
				}
				else
				{
					cout << "Invalid input.  Please select either Y or N." << endl << endl;
				}
			}
			optionMenu = false;
		}
		else
		{
			cout << "Invalid input." << endl << endl;	
		}
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
