#include <stdio.h>
int main()
{
  int num,sum,choice,a,b,c,digit,n;

  do{
      printf("\n==MENU==\n");
      printf("\n1.  check if a number is even or odd");
      printf("\n2. check if a number is positive or negative");
      printf("\n3.find greatest of three number");
      printf("\n4.sum of digits");
      printf("\n5.exit the program");
      scanf("%d",&choice);
      
      switch(choice)
      {
        case 1:
        {
          printf("Enter a number:");
          scanf("%d",&num);
          if(num %2 == 0)
          printf("number is even");
          else
          printf("number is odd");
          
          break;
        }
        
        case 2:
        {
          printf("Enter a number");
          scanf("%d",&num);
          if(num >= 0)
            printf("number is positive");
          else
            printf("number is negative");
            break;
        }
        case 3:
        {
          if(a==b && b==c)
            printf("All the number are same");
          
          else if(a>=b && b>=c)
            printf("a is greatest %ls",&a);
          
          else if(a<=b && b>=c)
            printf("b is greatest %ls",&b);
            
          else if(a<=b && b<=c)
            printf("c is greatest %ls",&c);
            
            break;
        
        }
        case 4:
        {
          printf("Enter a number");
          scanf("%d",&n);
          sum=0;
          while(n !=0)
          {
            digit = n % 10;
            sum = sum+digit;
            n = n/10;
          }
          printf("sum of digit %d",sum);
          break;
        
        }
        
      }
      while (n !=5);
      return 0;
}
        
      



