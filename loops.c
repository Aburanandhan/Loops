#include<stdio.h>
#include<stdint.h>
int main()
{
    uint32_t a,b,count=0;
    printf("Enter start and end numbers for which even number should print :");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if( i % 2 == 0)
        {
            printf("%d  ",i);
            count++;
        }
    }
    printf("\nThe number of even number is : %d",count);
    return 0;
}