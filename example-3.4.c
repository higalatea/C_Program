#include <stdio.h>
#include <string.h>

void itoa(int n,char s[]);
void reverse(char s[]);
int getline(char s[]);
int abs(int c);
int main()
  {
	int n;
	char s[100];
	
	printf("Input string:\n");
	getline(s);
	printf("String:\n%sint:%d\n\n",s,atoi(s));
	n=atoi(s);
	itoa(n,s);
	printf("Int:%d\nString:\n%s\n",n,s);

	return 0;
}
void itoa(int n,char s[])
{
	int i,sign;
	sign = n;
	i=0;
	do {
		s[i++] = abs(n) % 10 + '0';
	} while (n /= 10);
	
	if (sign >= 0) {
		s[i] ='\0';
	}
	else {
		s[i++]='-';
		s[i]='\0';
	}
	reverse(s);
	
}
 
int abs(int c)
{
	if (c>=0)
		return c;
	else
		return ~(c-1);
	
}
void reverse(char s[])
{
	int i,j,c;
	
	for (i=0,j=strlen(s)-1;i<j;++i,--j) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	
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
