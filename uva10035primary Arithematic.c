#include <stdio.h>

int main()
{
   unsigned long long int a, b;
    int count, r;
    while(scanf("%llu %llu", &a, &b)==2)
    {
        if(a==0 && b==0)
            break;
        r=0;
        count=0;
        while(a||b)
        {
            r=((a%10)+(b%10)+r)/10;
            a/=10;
            b/=10;
            count+=r;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
    }
    return 0;
}
