
#include "stdafx.h"
#include "iostream"
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <algorithm>


using namespace std;

class Matrix
{
private:
	int matrix[5][5];
public:
	void InputMatrix();
	void OutputMatrix();
	void Sort();
	void SeredneGeometru4ne();

};

void Matrix::InputMatrix()
{  
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("matrix[%d][%d] =", i + 1, j + 1);
			scanf_s("%d", &matrix[i][j]);
		}
	}
}

void Matrix::Sort()
{

	int x, i, j, variableToSwap;
	for (int k = 0; k < 5; k++) {
		for (i = 1; i < 5; i++) {
			x = matrix[k][i];
			for (j = i; j > 0 && (matrix[j - 1][k] < matrix[j][k]); j--) {
				variableToSwap = matrix[j - 1][k];
				matrix[j - 1][k] = matrix[j][k];
				matrix[j][k] = variableToSwap;
			}
		}
	}
}

void Matrix::OutputMatrix()
{   
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			cout <<  matrix[i][j] << "    ";
		cout << endl;
	}

}

void Matrix::SeredneGeometru4ne()
{
	int s;

	s = pow(sqrt(matrix[2][1] * matrix[3][1] * matrix[3][2] * matrix[4][1] * matrix[4][2] * matrix[4][3] * matrix[5][1] * matrix[5][2] * matrix[5][3] * matrix[5][4]), 1/10);
	cout << s << endl;

}







int main()
{
	int a;
	Matrix A;
	A.InputMatrix();
	A.Sort();
	A.OutputMatrix();
	A.SeredneGeometru4ne();
	scanf_s("%d", &a);


    return 0;
}

