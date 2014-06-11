#include <stdio.h>
unsigned setbits(unsigned char  x,unsigned char p,unsigned char n);
int main()
{
	unsigned char x,p,n;
	int m;
	x=9;
	p=1;
	n=1;
	m = setbits(9,1,1);
	printf("m should be 11,This m is %d",m);
}
unsigned setbits(unsigned char x,unsigned char  p,unsigned char n)
{
	unsigned char z,a,m,b;
	m = sizeof(x) * 8;
	z = ~0;
	a = x;
	b = ~x;
	
	z<<=(m-n);
	z>>=(m-n-p);
	
	z = ~z;
	
	a &= z;
	//a1 xu yao
	
	//a 为
	b<<=(m-n-p);
	b>>=(m-n);
	b<<=p;
	
	return a|b;
}
