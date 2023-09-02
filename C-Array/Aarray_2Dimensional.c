/*Write a program to add the values of two 2D arrays
a. Program should contains 3 functions including the main function
main()
1. Call function getArray()
2. Call function addArray()
3. Call function displayArray()
getArray()
1. Get values to the array
getArray()
1. Add array 1 and array 2
displayArray()
1. Display the array values*/#include <stdio.h>
void getArray(int a[100][100],z[100][100],int n);
void addArray(int a[100][100],z[100][100],int n);
void displayArray(int sum[][100]);

int main()
{
   int a[100][100], z[100][100], f, g, d, b,n, e;
   getArray(a, b,n);
   addArray(d,e,n);
   displayArray(g, f);
   return 0;
}

void getArray(int a[100][100], int z[100][100],int n)
{
   int i,j;
   printf("enter size");
    scanf("%d", &n);
   printf("enter numbers array1");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d", &a[i][j]);
      }
   }

   printf("array2:\n");
  for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         scanf("%d", &z[i][j]);
      }
   }
   
}
void addArray(int a[100][100], int z[100][100], int n)
{
   int i, j, sum[88][88];
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         sum[i][j] = a[i][j] + z[i][j];
      }
   }
}
void displayArray(int sum[][100], int n)
{
   int i, j;
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
      {
         printf("%d", sum[i][j]);
      }
   }
}
