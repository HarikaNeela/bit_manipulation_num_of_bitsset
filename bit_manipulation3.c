#include <stdio.h>
int main()
{
    int n,count=0,q;
    printf("Enter the number: ");
    scanf("%d",&n);
    q=n;
    while(n>0)
    {
    if(n&1==1)
       count++;
    n=n>>1;     //right shifting the number by 1
    }
    printf("The number of set bits in %d are %d",q,count);
    return 0;
}
