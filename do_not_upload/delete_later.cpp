#include <iostream> //PART 1 IN PROGRESS
using namespace std;

int main()  
{
	double katieTriangleMultiplier;
	double colNumber;
	double rowNumber;
	double pascalValue = 1;
	int triangleNumber;
	int rowsProduced;
	int diagonalsProduced;
	int x_coordinate;
	int y_coordinate;
	
	cout << "Please enter the triangle number wanted.";
	cin >> triangleNumber;
	
	cout << "Please enter how many rows wanted.";
	cin >> rowsProduced;
	
	x_coordinate = triangleNumber - 1;
	
	for (rowNumber = 0; rowNumber <= x_coordinate; rowNumber++)
	{
	y_coordinate = triangleNumber + rowNumber - 1;
		for (colNumber = 0; colNumber <= y_coordinate; colNumber++)
		{			
			if (colNumber == 0)
			{
				cout << x_coordinate << " " << y_coordinate << endl;
				cout << pascalValue << " ";
			}
			else
			{
				katieTriangleMultiplier = (rowNumber - colNumber + 1) / (colNumber);
				pascalValue = pascalValue * katieTriangleMultiplier;
				cout << x_coordinate << " " << y_coordinate << endl;
				cout << pascalValue << " ";
			}
		}
		pascalValue = 1;
		colNumber = 0;
		cout << endl << endl;
	}
}
