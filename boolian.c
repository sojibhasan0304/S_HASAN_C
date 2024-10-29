#include<stdio.h>
#include <stdbool.h> // This one is for bool type header file.** 
int main()
{   /*Booleans
Very often, in programming, you will need a data type that can only have one of two values, like:

YES / NO
ON / OFF
TRUE / FALSE
For this, C has a bool data type, which is known as booleans.

Booleans represent values that are either true or false.*/

    bool programminglover = true; 
    bool noprogramminglover = false; 

    printf("print:%d\n", programminglover); 
    printf("print:%d\n", noprogramminglover); 
    printf("print:%d\n\n", programminglover);

    printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
  printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
  printf("%d", 5 == 55); // Returns 0 (false) because 5 is not equal to 55
    return 0; 
}