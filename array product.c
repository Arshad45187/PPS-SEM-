#include <stdio.h>
   int main(){
   int s[5],i,product=1;

      printf("enter 5 numbers: ");

        for(i=0;i<5;i++)
        scanf("%d",&s[i]);

        for (i=0;i<5;i++)
         product=product*s[i];

        printf("product=%d",product);

        return 0;

        }
