//a practical example of using variables, we have created a program that stores different data about a college student:

#include<stdio.h>
int main()

{
    int studentid = 25; 
    int studentage = 20; 
    float studentfee = 75.75; 
    char studentgrad = 'A'; 

    printf("studentid:"); 
    printf("%d\n",  studentid);
    printf("studentage:"); 
    printf("%d\n",  studentage );
    printf("studentfee:"); 
    printf("%.2f\n",  studentfee );
    printf("studentgrad:"); 
    printf("%c\n\n",  studentgrad ); 

    //Calculate the Area of a Rectangle
    int lenth = 50;
    int wight = 30;
    int area = lenth*wight; 
    printf("The lenth is :%d\n",lenth);
    printf("The wight is:%d\n",wight);
    printf("The area of rectangle is:%d\n",area);  
    return 0 ; 
}