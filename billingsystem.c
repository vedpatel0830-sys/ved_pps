#include <stdio.h>
int main(void)
{
    float Red_Bull=10;
    float Thums_Up=100;
    float Sprite=200;
    float Coke=50;
    float Fanta=150;
    float a,b,c,d,e;
    printf("\n ************************* Billing System ************************************");
    printf("\n Red_Bull= %f \n Thums_up = %f \n Sprite = %f \n Coke = %f \n Fanta = %f ", Red_Bull,Thums_Up,Sprite,Coke,Fanta);
    printf("Enter How Many Red_Bull do you want\n");
    scanf("%f", &a);
    printf("Enter How Many Thums_up do you want\n");
    scanf("%f", &b);
    printf("Enter How Many Sprite do you want\n");
    scanf("%f", &c);
    printf("Enter How Many Coke do you want\n");
    scanf("%f", &d);
    printf("Enter How Many Fanta do you want\n");
    scanf("%f", &e);
    float x;
    x = (Red_Bull*a) + (Thums_Up*b) + (Sprite*c) + (Coke*d) + (Fanta*e);
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
