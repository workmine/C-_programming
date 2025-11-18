#include <stdio.h>
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int r1, int c1, int r2, int c2)
{
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
        }
    }
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; k++) 
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void inputMatrix(int mat[][10], int rows, int cols, int matNum) 
{
    printf("Enter elements of matrix %d (%dx%d):\n", matNum, rows, cols);
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
}
void displayMatrix(int mat[][10], int rows, int cols) 
{
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    int matrix1[10][10], matrix2[10][10], result[10][10];
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    while(c1 != r2) 
    {
        printf("\nError! Columns of first matrix must equal rows of second matrix.\n");
        printf("Enter rows and columns for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and columns for second matrix: ");
        scanf("%d %d", &r2, &c2);
    }
    inputMatrix(matrix1, r1, c1, 1);
    inputMatrix(matrix2, r2, c2, 2);
    multiplyMatrices(matrix1, matrix2, result, r1, c1, r2, c2);
    printf("\nMatrix 1 (%dx%d):\n", r1, c1);
    displayMatrix(matrix1, r1, c1);
    
    printf("\nMatrix 2 (%dx%d):\n", r2, c2);
    displayMatrix(matrix2, r2, c2);
    
    printf("\nProduct of matrices (%dx%d):\n", r1, c2);
    displayMatrix(result, r1, c2);
    
    return 0;
}
