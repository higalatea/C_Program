//统计输入asicc值在32-126之间的字符数
#include<stdio.h>
int main()
{
	int c,i;
	int nchar[95];
	for (i = 0;i < 95;++i)
		nchar[i] = 0;
	while ((c = getchar()) != EOF) {
		if (31 < c && c < 127) {
			++nchar[c-32];
		}
		else if (c == '\n') {

			for (i = 0;i<95;++i)
				printf("%c Number of char%d\n",(i+32),nchar[i]);
			for (i = 0;i < 95;++i)
				nchar[i] = 0;
		}
		else if (c == '\t') {
			;
		}
		else
			printf("Input a-z\n");

	}
}
