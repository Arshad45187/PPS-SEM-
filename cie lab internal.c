#include<stdio.h>
int main()
{
    int rev,rem,orginal,n;
    printf("enter a number");
    scanf("%d",&n);
    orginal=n;
    rem=0;
    rev=0;
      while (n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
        if (rev==orginal)
            printf("palindrone number");
        else
            printf("not a palindromenumber");

    return 0;
}
