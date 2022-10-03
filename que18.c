#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1; i<=9; i++)
    {
        i<=5?k++:k--;
         for(i=1; i<=9; i++)
         {
            if(j>=6-k&&j<=4+k)
            printf("*");
            else
            printf(" ");
         }
         printf("\n");
    }
    return 0;
}