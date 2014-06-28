#include <stdio.h>
#include <string.h>
int abs(int c);
void reverse(char s[]);
void itoa(int n,char s[],int m);
int main()
{
	int n;
	char s[100];
	n = -12522323;
	itoa(n,s,15);
	printf("String is:\n%s\n",s);
	
}

void itoa(int n,char s[],int m)
{
	int i,sign,a;
	sign = n;
	i=0;
	do {
		s[i++] = abs(n) % 10 + '0';
	} while (n /= 10);
	
	if(sign<0) {
		s[i]='-';
		++i;
	}
	
	a = m - i;
	
	if (a>0)
	while(a--) {
		s[i]='*';
		++i;
	}
	
	s[i]='\0';
	
	reverse(s);

}

void reverse(char s[]) {
    int c, i, j;
    for ( i = 0, j = strlen(s)-1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int abs(int c)
{
	if (c>=0)
		return c;
	else
		return ~(c-1);//计算机二进制中：负整数是正整数取反加1得到的，正数即是负数减1取反得到

}
