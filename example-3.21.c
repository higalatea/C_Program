#include <stdio.h>
#include <string.h>

int getline(char s[]);
void escape(char s[],char t[]);
void unescape(char s[],char t[]);
int main()
{
	char ss[100];
	char s[]="\aHello\a,\n\tWorld\\\\! Mistakee\b was \"Extra 'e'\"!\n";
	printf("\\\\");
	unescape(ss,s);
	printf("\nAfter unescape:\n%s",ss);
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

void escape(char s[],char t[])
{
	int i = 0;
	//int ii = 0;//i保存s的长度,ii保存t的长度
	int m;//循环字符串t
	
	/*获取字符串s的长度*/
	while (s[i] != '\0') {
		++i;
	}
		
	/*获取字符串t的长度*/	
	/* while(t[ii] != '\0')
		++ii; */
	
	/*字符串t接到字符串s的末尾，并将字符串t中的换行符和制表符分别打印成\n与\t的可见形式*/
	for (m = 0;t[m] != '\0';++m){
		switch (t[m]) {
			case '\n': 
				s[i++] = '\\';
				s[i++] = 'n';
				break;
			case '\t':
				s[i++] = '\\';
				s[i++] = 't';
				break;
			case '\a':
				s[i++] = '\\';
				s[i++] = 'a';
				break;
			case '\b':
				s[i++] = '\\';
				s[i++] = 'b';
				break;
			case '\f':
				s[i++] = '\\';
				s[i++] = 'f';
				break;
			case '\r':
				s[i++] = '\\';
				s[i++] = 'r';
				break;
			case '\v':
				s[i++] = '\\';
				s[i++] = 'v';
				break;
			case '\\':
				s[i++] = '\\';
				s[i++] = '\\';
				break;
			case '\"':
				s[i++] = '\\';
				s[i++] = '\"';
				break;
			default: 
				s[i++] = t[m];
				break;
		}
	}
	
	s[i] = '\0';
		
}

void unescape(char s[],char t[])
{
	int i = 0;
	//int ii = 0;//i保存s的长度,ii保存t的长度
	int m;//循环字符串t
	

	for (m = 0;t[m] != '\0';++m){
		switch (t[m]) {
			case '\\':
				//printf("case one \\ \n");
				switch (t[m+1]) {
					case 'n': 
						s[i++] = '\n';
						++m;
						break;
					case 't':
						s[i++] = '\t';
						++m;
						break;											
					case 'a':
						s[i] = '\a';
						++m;
						break;
						
					case 'b':
						s[i] = '\b';
						++m;
						break;
						
					case 'f':
						s[i] = '\f';
						++m;
						break;
						
					case 'r':
						s[i] = '\r';
						++m;
						break;
						
					case 'v':
						s[i] = '\v';
						++m;
						break;
						
					case '\\':
						s[i] = '\\';
						++m;
						break;
						
					case '\"':
						s[i] = '\"';
						++m;
						break;
					default: 
						s[i++] = t[m];
						break;
				}
				break;
			default:
				s[i++] = t[m];
				break;
		}
		
	}
	
	s[i] = '\0';
		
}
