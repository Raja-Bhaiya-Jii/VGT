
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
char nm[5][20],temp[20];
int i,j;

for(i=0;i<5;i++)  //Input 5 names.
 {
  printf("Name= ");
  scanf("%s",nm[i]);
 }
 //Logic of string sorting.
 for(i=0; i<5;i++)
  {
   for(j=0;j<4;j++)
   {
    if(strcmpi(nm[j],nm[j+1]) == 0)
     {
      strcpy(temp,nm[j]);
      strcpy(nm[j],nm[j+1]);
      strcpy(nm[j+1],temp);
     }
    }
   }
 for(i=0;i<5;i++)
  {
   printf("Value:%s\n",nm[i]);
  }
  getch;
}


