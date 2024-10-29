#include<stdio.h>
int main()
{
    int number_of_item = 110;
    float cost_per_item = 7.55; 
    float total_cost_of_item =  number_of_item*cost_per_item; 
    char currency ='$'; 
    printf("Number of iteam is:%d\n", number_of_item); 
    printf("Cost of per iteam is:%.2f %c\n", cost_per_item, currency);
    printf("Total cost of iteams is:%.2f %c\n", total_cost_of_item,currency);
    return 0; 
}