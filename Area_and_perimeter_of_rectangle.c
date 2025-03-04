/*
Author:Emicaster Mutemi 
ADM:D33-2413-2023
DATE:3/03/2025
*/
#include <stdio.h>

int main() 
{
    float length, breadth, area, perimeter;
    //input length and breadth from the user;
    printf("enter the length of the rectangle:");
    scanf("%f", & length);
    printf("enter the breadth of the rectangle:");
    scanf("%f", &breadth);
    //calculate the area and perimeter;
    area=length*breadth;
    perimeter=2*(length+breadth);
    //output the results 
    printf ("area of the rectangle:%.2f\n",area);
    printf ("perimeter of the rectangle:%.2f\n",perimeter);
    
    return 0;
}    