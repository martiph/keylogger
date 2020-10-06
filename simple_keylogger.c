#include <stdio.h>

// shamelessly copied from https://www.includehelp.com/code-snippets/how-to-identify-enter-key-is-pressed-in-c-programming-language.aspx

int main()
{
	char ch;
	while(1)
	{
		ch=fgetc(stdin);
        printf("%c is pressed.\n",ch);
		ch=getchar();
	}
	return 0;
}