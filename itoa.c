//整数转字符串
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
