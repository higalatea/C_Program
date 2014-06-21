#include <stdio.h>
#include <string.h>

int getline(char s[]);
void escape(char s[],char t[]);
int main()
{
	char s[100];
	char t[100];
	printf("Input s string\n");
	getline(s);
	printf("Input t string\n");
	getline(t);
	escape(s,t);
	printf("After escape:\n%s",s);
}

void escape(char s[],char t[])
{
	int i = 0;
	int ii = 0;//i保存s的长度,ii保存t的长度
	int m;//循环字符串t
	
	/*获取字符串s的长度*/
	while (s[i] != '\0') {
		++i;
	}
		
	/*获取字符串t的长度*/	
	while(t[ii] != '\0')
		++ii;
	
	/*字符串t接到字符串s的末尾，并将字符串t中的换行符和制表符分别打印成\n与\t的可见形式*/
	for (m = 0;t[m] != '\0';++m){
		switch (t[m]) {
			case '\n': 
				s[i] = '\\';
				++i;
				s[i] = 'n';
				++i;
				break;
			case '\t':
				s[i] = '\\';
				++i;
				s[i] = 't';
				++i;
				break;
			default: 
				s[i] = t[m];
				++i;
				break;
		}
	}
	
	s[i] = '\0';
		
}

int getline(char s[])
{
	int i,c;
	for (i = 0;(c = getchar()) != '\n' && c != EOF;++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}
