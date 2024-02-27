// This program takes two matrices as input and performs matrix addition.
// It prompts the user to enter the number of rows and columns for the matrices,
// followed by the elements of each matrix. The program then adds the corresponding
// elements of the matrices and prints the resulting matrix.

#include <stdio.h>

int main() {
  int r, c, i, j;

  // Prompt the user to enter the number of rows and columns
  scanf("%d", &r);
  scanf("%d", &c);

  // Declare arrays to store the matrices and the sum
  int a[r][c], b[r][c], sum[r][c];

  // Prompt the user to enter the elements of the first matrix
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }

  // Prompt the user to enter the elements of the second matrix
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &b[i][j]);
    }

  // Perform matrix addition
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  // Output the sum matrix
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d ", sum[i][j]);
      if (j == c - 1) {
        printf("\n");
      }
    }

  return 0;
}