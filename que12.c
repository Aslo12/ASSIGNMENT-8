#include<stdio.h>
int main()
{
 int i ,j;
 char k;
 for(i=1;i<=4; i++)
 {
    k='A';
    for(j=7; j>=1; j--)
    {
      if(j>=i&&j<=8-i)
      {
        printf("%c",k);
        j>4?k++:k--;
    
      }

    else{
        printf(" ");
      
         }
    }

    printf("\n");
 }
  return 0;
}