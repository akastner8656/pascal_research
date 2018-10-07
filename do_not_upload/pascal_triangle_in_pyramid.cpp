#include <iostream> //THIS CODE IS ALMOST FINISHED.  THERE ARE A FEW PROBLEMS, FIX THEM
using namespace std;
int main()
{
	int triangleNumber;
	int rowsProduced;
	int diagonalsProduced;
	int x_coordinate;
	int y_coordinate;
	double katieTriangleMultiplier;
	double colNumber;
	double rowNumber;
	double pascalValue = 1;
	int maximum_row;
	
	cout << "Please enter the triangle number wanted. ";
	cin >> triangleNumber;
	
	x_coordinate = triangleNumber - 1;
	
	cout << "Please enter how many rows you want produced. ";
	cin >> rowsProduced;
	
	diagonalsProduced = rowsProduced;
	y_coordinate = triangleNumber + diagonalsProduced - 2;

	for (rowNumber = 0; rowNumber < rowsProduced; rowNumber++)
	{
		for (colNumber = 0; colNumber <= rowNumber; colNumber++)
		{
			if (colNumber == 0) //if the first element is being produced
			{
				if (rowNumber == x_coordinate + y_coordinate) //if the last row is produced
				{
					if (colNumber == y_coordinate) //if the maximum y-coordinate is reached
					{
						cout << pascalValue << " ";
					}
				}
			}
			else
			{
				katieTriangleMultiplier = (rowNumber - colNumber + 1) / (colNumber);
				pascalValue = pascalValue * katieTriangleMultiplier;
				
				cout << pascalValue << " ";
				
				if (rowNumber == x_coordinate + y_coordinate)
				{
					if (colNumber == y_coordinate)
					{
						cout << pascalValue << " ";
					}
				}
			}	
		}
		pascalValue = 1;
		colNumber = 0;
		cout << endl << endl;
	}
}
