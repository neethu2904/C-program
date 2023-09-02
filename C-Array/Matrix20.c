#include <stdio.h>

void matrixInput(int rows, int cols, int mat[][cols]) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void matrixAddition(int rows, int cols, int mat1[][cols], int mat2[][cols], int result[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixPrint(int rows, int cols, int mat[][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int mat1[rows][cols];
    int mat2[rows][cols];
    int result[rows][cols];

    printf("For matrix 1:\n");
    matrixInput(rows, cols, mat1);

    printf("For matrix 2:\n");
    matrixInput(rows, cols, mat2);

    matrixAddition(rows, cols, mat1, mat2, result);

    printf("Matrix 1:\n");
    matrixPrint(rows, cols, mat1);

    printf("Matrix 2:\n");
    matrixPrint(rows, cols, mat2);

    printf("Result of matrix addition:\n");
    matrixPrint(rows, cols, result);

    return 0;
}






/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[100][100],b[100],rows,cols;
    printf("Enter the row of matrix");
    scanf("%d",&rows);
    printf("Enter the col of matrix");
    scanf("%d",&cols);
    while(true){
        printf("Menu");
        printf("\n1.Matrix Addition \n2.Matrix Subtraction \n3.Matrix Multiplication \n4.Matrix Divison \n5.Exit);
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                matrix_Addition();
            case 2:
                matrix_Subtraction();
            case 3:
                matrix_Multiplication();
            case 4:
                 matrix_Division();
            case 5:
                system.exit();
        }
    }
}
void matrix_Addition(int rows[][],int cols[][]){
        int sum[100][100];
        printf("Enter the value of array1");
        for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the value of array1"); 
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
        sum[i][j] = a[i][j]+b[i][j];
        printf("Sum of 2 array",sum[i][j]);
    }
    return sum;
}

