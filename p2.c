
  #include <stdio.h>

int main()
{
  int English, Maths, Electrical, PPS, FAI;
  float per, Total;

  printf("English marks: ");
  scanf("%d", &English);
  printf("Maths marks: ");
  scanf("%d", &Maths);
  printf("Electrical marks: ");
  scanf("%d", &Electrical);
  printf("PPS marks: ");
  scanf("%d", &PPS);
  printf("FAI marks: ");
  scanf("%d", &FAI);

  Total = English + Maths + Electrical + PPS + FAI;
  printf("\nTotal obtained marks out of 500: %.2f", Total);

  per = (Total / 500) * 100;
  printf("\nPercentage = %.2f%%", per);

  // Grading Logic
  if (per >= 90) {
    printf("\nGrade = A");
  } 
  else if (per >= 75) {
    printf("\nGrade = B");
  } 
  else if (per >= 60) {
    // Correctly catches values between 60 and 74.9
    printf("\nGrade = C");
  } 
  else if (per >= 40) {
    printf("\nGrade = D");
  } 
  // REMOVED the semicolon here
  else if (per < 40) { 
    printf("\nGrade = Fail");
  }

  return 0;
}
