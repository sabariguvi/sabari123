#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[1000],b[1000];
	gets(a);
	gets(b);

	printf("%s%s",a,b);
	return 0;
}
