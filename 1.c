#include<stdio.h>
int main()
{
    printf("please input two num\n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("sum = %d\n",a+b);
    printf("sub = %d\n",a>b?(a-b):(b-a));

    return 0;
}
