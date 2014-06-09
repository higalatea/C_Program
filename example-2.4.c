#include <stdio.h>
int getline(char s[]);
int main()
{
	int ns,nss;
	int i,ii,set;
	set = 0;
	char s[1000];
	char ss[1000];
	while (1) {
		printf("\nInput your string:\n");
		ns = getline(s);
		printf("Input delete string:\n");
		nss = getline(ss);
		
		for (i = 0;i<ns;++i) {
			
			for ( ii = 0;ii<nss;++ii) {
				if (ss[ii] == s[i]) {
					set = 1;
					ii = nss;//跳出循环
					}
				else {
					set =0;
				}
			}
			
			if (set == 0)
				putchar(s[i]);
		}
	}
		
}		
int getline(char s[])
{
	int i,c;
	for (i = 0;c != '\n' && (c = getchar()) != EOF;++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';

	return i;
}
