#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    printf("Enter operator (+,-,*,/,%):");
    scanf("%c",&op);
    switch(op)
       case'+'
    {
          printf("Addition =%d",a+b);
          break
       case'-'
          printf("Substraction =%d",a-b);
          break
       case'*'
          printf("Multiplication =%d",a*b);
          break
       case'/'
          printf("division =%d",a/b);
          break
       default
          printf("invalid operator")
          }
    return 0
    }

}
