#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter no of rows in matrix 1: ";
    cin >> r1;
    cout << "Enter no of coulmn in matrix 1: ";
    cin >> c1;

    cout << "Enter no of rows in matrix 2: ";
    cin >> r2;
    cout << "Enter no of coulmn in matrix 2: ";
    cin >> c2;

    if (c1 != r2)
    {
        cout << "Multiplication not possible!";
        return 0;
    }

    // Enter rows of matrix 1
    int matrix1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter elements of matrix 1 for row " << i << " column " << j << " : ";
            cin >> matrix1[i][j];
        }
    }
    // Enter rows of matrix 2
    int matrix2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter elements of matrix 1 for row " << i << " column " << j << " : ";
            cin >> matrix2[i][j];
        }
    }

    // Print Matrix1
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    // Print Matrix2
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {

            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    // Muliplication of matrix

    int k = 0;
    int result[c1][r2];
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            result[i][j]=0;
            for (int k = 0; k < r1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}