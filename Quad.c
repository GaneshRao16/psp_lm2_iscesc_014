//quadratic equation
#include<stdio.h>
#include<math.h>
float main()
{
  float a,b,c,discriminant,root1,root2,realpart,imiginarypart;
  printf("Enter the coefficientof x,y & constant");
  scanf("%f%f%f",&a,&b,&c);
  discriminant=b*b-4*a*c;
  if(discriminant>0)
  {
    printf("The roots are real and distinct");
  root1=(-b+sqrt(discriminant))/2*a;
  root2=(-b-sqrt(discriminant))/2*a;
  printf("The roos are root1=%f ,root2=%f",root1,root2);
  }
  else if(discriminant==0)
  {
    printf("The roots are real and equal");
    root1=root2=-b/2*a;
      printf("The roos are root1=%f ,root2=%f",root1,root2);
  
     }
  else
   {
   realpart = -b / (2 * a);
   imiginarypart = sqrt(-discriminant) / (2 * a);
   printf("The roots are root1=%f+%f and root=%f-%f",realpart,imiginarypart,realpart,imiginarypart);
    }
}
