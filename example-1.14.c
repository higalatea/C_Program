#include<stdio.h>
int main()
{
	int c,i;
	int nchar[26];
	for (i = 0;i < 26;++i)
		nchar[i] = 0;
	while ((c = getchar()) != EOF) {
		if (96 < c && c < 123) {
			++nchar[c-97];
		}
		else if (c == '\n') {

			for (i = 0;i<26;++i)
				printf("%c Number of char%d\n",(i+97),nchar[i]);
			for (i = 0;i < 26;++i)
				nchar[i] = 0;
		}
		else if (c == ' '|| c == '\t') {
			;
		}
		else
			printf("Input a-z\n");

	}
}
