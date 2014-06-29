#include <stdio.h>
#include <ctype.h>

int main()
{
	double atof(char s[]);
	char s[]="123.45e-6";
	printf("The %s After atoi %f\n",s,atof(s));
}

double atof(char s[])
{
	double val,power,epower,esign;
	int i,sign,n,eval;
	double final = 1.0;

	for (i = 0;isspace(s[i]);i++)
		;
	
	sign = (s[i] == '-') ? -1:1;
	if(s[i]=='+'||s[i]=='-')
		i++;
	for (val = 0.0;isdigit(s[i]);i++)
		val = 10.0 * val + (s[i] - '0');
		
	if(s[i]=='.')
		i++;
		
	for (power = 1.0;isdigit(s[i]);i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}

	if(s[i]=='e'||s[i]=='E')
		i++;

	esign = (s[i] == '-') ? 0.1:10.0;
	if(s[i]=='+'||s[i]=='-')
		i++;
	printf("esign is %f\n",esign);
	printf("s[i] is %d\n",s[i]);
	for (eval = 0;isdigit(s[i]);i++)
		eval = 10 * eval + (s[i] - '0');
		
	printf("eval is %d\n",eval);
	for (n = 0;n<eval;++n)
		final = esign * final;
	
	printf("final is %f\n",final);
	
	return sign * val / power * final;
}
