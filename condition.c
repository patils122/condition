#include<stdio.h>
#include<conio.h>
int main()
{
int M;
printf("Enter the number:");
scanf("%d",&M);
if(M%3==0 && M%5==0)
{
    printf(" Good Number: %d",M);
}
else if(M%3==0 && M%5!=0)
{
     printf(" Bad Number: %d",M);
}
else if(M%3!=0 && M%5==0)
{
      printf(" Poor Numbergc: %d",M);
}
else{
    printf("-1";)
}
return 0;
}