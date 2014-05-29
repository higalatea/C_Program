#include <stdio.h>
int getline(char s1[]);

int main(void)
{
	char s1[10]; //use 's1[11]' 's1[1000]' is same?
	int i,n;
	while (1) {
		n = getline(s1);
		if (n > 80) {
			printf(":) Bingo!\n");
			for (i=0;i<n;++i)
				putchar(s1[i]);
			putchar('\n');
		} else {
			printf(":( Bigger 80 will printf,you input %d Come on!\n",n);
		}

	}
}
int getline(char s[])
{
	int i,c;
	for (i = 0;(c = getchar()) != EOF && c != '\n';++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i-1;
}
