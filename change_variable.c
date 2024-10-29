// HOW TO CHANGE VALUE IN C. 
#include <stdio.h>
int main()
{
    int num = 10; // Here the valu is 10
    num = 15; // But now we convert it in 15. and it's the final value. 
    printf("The value in program is:%d\n\n", num); 
    
    // another way to change variable
    int v1 = 30;
    int v2 = 50; 
    v1=v2;
    printf("The changed valu is: %d", v1);   
    return 0;
}