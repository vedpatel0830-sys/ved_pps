#include<stdio.h>
int main(void)
{
    float Pen=10;
    float Geometry_Box=100;
    float Red_Bull=200;
    float Book=50;
    float Cheese=150;
    float a,b,c,d,e;
    printf("\n ************************* Billing System ************************************");
    printf("\n Pen= %f \n Geometry_Box = %f \n Red_Bull = %f \n Book = %f \n Cheese = %f ", Pen,Geometry_Box,Red_Bull,Book,Cheese);
    printf("Enter How Many Pen do you want\n");
    scanf("%f", &a);
    printf("Enter How Many Geometry_Box do you want\n");
    scanf("%f", &b);
    printf("Enter How Many Red_Bull do you want\n");
    scanf("%f", &c);
    printf("Enter How Many Book do you want\n");
    scanf("%f", &d);
    printf("Enter How Many Cheese do you want\n");
    scanf("%f", &e);
    float x;
    x = (Pen*a) + (Geometry_Box*b) + (Red_Bull*c) + (Book*d) + (Cheese*e);
    printf("Total is %f\n", x);
    if(x>=5000)
    {
        printf("The discounted bill is %f\n", x-x*10/100);
    }
    else if (x>=2500)
    {
        printf("The discounted bill is %f\n", x-x*5/100);
    }
    else
    {
        printf("No discount. Total bill is %f\n",x);
    }
}
