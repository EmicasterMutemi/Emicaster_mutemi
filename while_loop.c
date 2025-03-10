/*
While loop
Author:Emmicaster Mutemi
Reg no:D33-2413-2025
Date:9/03/2025
*/
#include <stdio.h>

int main() {
    int i = 1; //start
 while (i <=100) { //stop
        // Print the current value of i and the cube of i.
        printf("Number is: %d and cube of %d is: %d\n", i, i, i * i * i);
        i++; //step
    }

    return 0; // Return 0 to indicate successful execution of the program.
}