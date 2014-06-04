#include <stdio.h>
int reserve(char s[]);
int getline(char s[]);

int main(void)
{
		char line[100];
		int n;
		while (1) {
		n = getline(line);
		printf("Line is:\n%s",line);
		reserve(line);
	}
		
		return 0;
}
int reserve(char s[])
{
	int i,n,j;
	j = 0;

	for (i = 0;s[i] != '\0';++i)
		;
	++i;
	
	char rs[i];
	for (n = i;n >=3;--n) {
		rs[j] = s[n-3];
		++j;
	}
	rs[j] = '\n';
	++j;
	rs[j] = '\0';
	printf("After reserve:\n%s",rs);

	return i;
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

	return i;
}
