#include <stdio.h>
void addMatrices(int mat1[][10], int mat2[][10], int result[][10], int rows, int cols) {
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
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
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    inputMatrix(matrix1, rows, cols, 1);
    inputMatrix(matrix2, rows, cols, 2);
    addMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, rows, cols);
    
    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, rows, cols);
    
    printf("\nSum of matrices:\n");
    displayMatrix(result, rows, cols);
    
    return 0;
}
