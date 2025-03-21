// C Program to illustrate the 2D array
/*
Author:Emicaster Mutemi 
Reg.no:D33-2413-2023
Date:21/3/2025
*/

#include <stdio.h>

int main() {
  
    // Create and initialize an array with 3 rows
      // and 2 columns
    int arr[3][2] = { { 0, 1 }, { 2, 3 }, { 4, 5 } };

    // Print each array element's value
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d]: %d    ", i, j, arr[i][j]);
        }
          printf("\n");
    }
    return 0;
}