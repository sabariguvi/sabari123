#include<stdio.h>
#include<string.h>
void main()
{
char a[1000];
int count=0,i;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]=='.')
{
++count;
}
}
printf("%d",count);
}
