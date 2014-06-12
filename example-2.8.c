#include <stdio.h>
unsigned char rightrot(unsigned char x,unsigned char n);

int main()
{
	unsigned char x,n;
	x = 109;
	
	for (n = 0;n < 16;++n)
		printf("n is %d\n",rightrot(x,n));
}
unsigned char rightrot(unsigned char x,unsigned char n)
{
	unsigned char i;
	unsigned char a,b;
	n %=8;
	for (i=0;i<n;++i) {
		a=x>>1;
		b=1;
		b&=x;
		b<<=7;
		x=a|b;
	}
	
	return x;
}
