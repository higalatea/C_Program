#include <stdio.h>
int getline(char s1[]);

int main(void)
{
	char s1[10];
	int i,n;
	while (1) {
		n = getline(s1);
		for (i = n;i>=0;--i)
			putchar(s1[i]);
		putchar('\n');
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
