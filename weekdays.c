#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
 int no;

 scanf("%d",&no);
 switch(no)
 {
  case 1:
   printf("Monday");
   break;
  case 2:
   printf("Tuesday");
   break;
  case 3:
   printf("Wednesday");
   break;
  case 4:
   printf("Thursday");
   break;
  case 5:
   printf("Friday");
   break;
  case 6:
   printf("Saturday");
   break;
  case 7:
   printf("Sunday");
   break;
  default:
   printf("Please Enter Proper Input");
   break;
 }
 return 0;
}
