#include<stdio.h>
void main()
{
int n,l,r,i;
scanf("%d",&n);
scanf("%d %d",&l,&r);
if(n>l&&n<r)
{
    printf("yes");
}
else
{
    printf("no");
}
return 0;
}
