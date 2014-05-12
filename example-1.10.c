#include <stdio.h>
#define Tab '\t'
#define BackSpace '\b'
#define Backslash '\\'
int main()
{
	int chars;
	while ((chars = getchar()) != EOF){
		if (chars == Backslash)
			printf("\\\\");
		if (chars == Tab)
			printf("\\t");
		if (chars == BackSpace)
			printf("WTF"); //See Below
		if (chars != Tab && chars != BackSpace && chars != Backslash)
			putchar(chars);
	}
}
/*You can't see \\b,because the terminal from which you are running the program is doing translations, and has code to treat a backspace as the user would expect. For example, if you typed "foo<backspace>", your program would likely read in a 'f' and a 'o', not the expected 'f' 'o' 'o' '\b'. There are platform specific ways for sending a literal backspace. For example on a unix like system, control-v control-h will likely generate a \b character.
Further, if you were to pass a file containing a \b character into the standard input of the above program, you'd also see a \b.
