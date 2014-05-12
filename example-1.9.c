/*#include <stdio.h>
int main(){
	long chars,cs;
	cs = 0;
	while ((chars = getchar()) != EOF){
		if (chars == ' ')
			++cs;
		if ((cs == 1) && (chars != ' ')) {
			cs = 0;
			putchar(chars);
		}
		if ((cs == 2) && (chars == ' ')) {
			cs = 0;
			putchar(chars);
		}

	}
}
*/
#include <stdio.h>
int main()
{
	int chars,charscheck;
	charscheck = EOF;
	while((chars = getchar()) != EOF) {
		if (chars == ' ')
			if (charscheck != ' ')
			putchar(chars);
		if (chars != ' ')
			putchar(chars);
		charscheck = chars;
	}
}
