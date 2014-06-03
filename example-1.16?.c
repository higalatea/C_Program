#include <stdio.h>
int getline(char s1[]);

int main(void)
{
	char s1[10];
	while (1)//如果去掉这行的话，程序就会溢出崩溃？
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
//主函数中s1[10]会在内存产生s[0]~s[9]，10个存储单位，但程序似乎可以存储超过s[10]的数据。
//E:\GitHub\C_Program>a.out
//123456789
//9,123456789
//1234567890
//10,1234567890
//1234567890123456789
//19,1234567890123456789
//7行 while 语句取消后会崩溃 为什么
