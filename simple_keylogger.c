#include <stdio.h>

// shamelessly copied from https://www.includehelp.com/code-snippets/how-to-identify-enter-key-is-pressed-in-c-programming-language.aspx

int main()
{
	char ch;
	bool capturing = true;

	// start the loop for capturing keystrokes
	while(capturing)
	{
		ch=fgetc(stdin);
        printf("%c was pressed.\n",ch);
		ch=getchar();
	}
	return 0;
}