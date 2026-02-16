#include <stdio.h>

int main()
{
  int English,Maths,Electrical,PPS,FAI;
  float per,Total;

  printf("\nEnglish marks= ");
  scanf("%d",&English);
  printf("\nMaths marks= ");
  scanf("%d",&Maths);
  printf("\nElectrical marks= ");
  scanf("%d",&Electrical);
  printf("\nPPS marks= ");
  scanf("%d",&PPS);
  printf("\nFAI marks= ");
  scanf("%d",&FAI);
  Total=English+Maths+Electrical+PPS+FAI;
  printf("\nTotal obtained mark out of 500 %f",Total);

  per= Total/500*100;
  printf("\nper = %f",per);
  
  if ( per>=90 )
  {
    printf("\nGrade=A");
  }
  else if ( per>=75 )
  {
    printf("\nGrade=B");
  }
  else if ( per>=60 )
  {
    printf("\nGrade=C");
  }
  else if ( per>=40 )
  {
    printf("\nGrade=D");
  }
  else if ( per<33 );
  {
    printf("\nGrade=Fail");
  }
  return 0;
}
