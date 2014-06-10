#include <stdio.h>
unsigned setbits(unsigned char  x,unsigned char p,unsigned char n,unsigned char y);
int main()
{
	unsigned char x,p,n,y;
	int m;
	x=166;
	p=1;
	n=4;
	y=169;
	m = setbits(x,p,n,y);
	printf("m should be 178,This m is %d",m);
}
unsigned setbits(unsigned char x,unsigned char  p,unsigned char n,unsigned char y)
{
	unsigned char z,a,m;
	m = sizeof(x) * 8;
	z = ~0;
	a = x;
	z<<=(m-n);
	z>>=(m-n-p);
	z=~z;
	a&=z;
	y<<=(m-n);
	y>>=(m-n-p);
	
	return y|a;
}
