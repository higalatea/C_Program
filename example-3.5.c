//将整数转换为指定的2进制8进制16进制字符串，目前8和16进制的负整数转换不是很完美
#include <stdio.h>
#include <string.h>
void reverse(char s[]);
int abs(int c);
void itob(int n,char s[],int b);
int main()
{
	char s[100];
	int n;
	n=-302;
	itob(n,s,2);
	printf("%d String is %s\n",n,s);
}

void itob(int n,char s[],int b)
{
	int i=0;
	int sign = n;
	int j;
	int m;
	j = sizeof(n) * 8;
	
	switch (b) {
		case 2:
			if (sign >=0) {
				do {
					s[i] = n % 2+'0';
					++i;
				} while (n /= 2);
			}
			else {
				m = abs(n)-1;
				
				do {
					if (m % 2 == 0)
						s[i] = 1 + '0';
					else
						s[i] = 0 + '0';
				
					++i;					
				} while (m /= 2);
				
				j = j - i;
								
				while(j--) {
					s[i]='1';
					++i;
				}
			}
						
			break;
		case 8:
			do {
				s[i] = abs(n) % 8+'0';
				++i;
			} while (n /= 8);
			
			if (sign<0) {
				s[i] = '-';
				++i;
			}
			break;		
		case 16:
			do {
				switch (abs(n) % 16) {
					case 10:
						s[i] = 'A';
						break;
					case 11:
						s[i] = 'B';
						break;
					case 12:
						s[i] = 'C';
						break;
					case 13:
						s[i] = 'D';
						break;
					case 14:
						s[i] = 'E';
						break;
					case 15:
						s[i] = 'F';
						break;
					default:
						s[i] = abs(n) % 16+'0';
						break;
				}
				
				++i;
			} while (n /= 16);
			
			if (sign<0) {
				s[i] = '-';
				++i;
			}
			break;
		default:
			do {
			s[i++] = abs(n) % 10 + '0';
			} while (n /= 10);
			
			if (sign<0) {
				s[i] = '-';
				++i;
			}
			break;
	}

	s[i] = '\0';
	
	reverse(s);
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

int abs(int c)
{
	if (c>=0)
		return c;
	else
		return ~(c-1);//计算机二进制中：负整数是正整数取反加1得到的，正数即是负数减1取反得到

}
