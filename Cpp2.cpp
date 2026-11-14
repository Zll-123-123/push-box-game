#include <stdio.h>
void my()
{
	char ch;
	ch=getchar();
	if(ch!='c')
		my();
	putchar(ch);
}
int main()
{
my();
return 0;
}