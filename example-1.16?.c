#include <stdio.h>
int getline(char s1[]);

int main(void)
{
	char s1[10];
	while (1)
	printf("%d,%s",getline(s1),s1);
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
/×为什么s1是10位数组，但可以输出任意长度的字符。声明s1[10]会在内存产生s[0]~a[9]，10个存储单位，下面的i可以超过10，
大于s[9]也给赋值了。仍然可以打印大于超过10个存储单位的数组×/
