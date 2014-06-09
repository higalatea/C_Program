#include <stdio.h>
#include <string.h>
int getline(char s[]);
void squeeze(char s[],char ss[]);
int main()
{
	char s[1000];
	char ss[1000];
	while (1) {
		printf("\nInput your line:\n");
		getline(s);
		printf("Input delete line:\n");
		getline(ss);
		squeeze(s,ss);
		printf("After squeeze:\n%s",s);
	}
}
	
void squeeze(char s[],char ss[])
{
	int ns,nss;
	int i,ii,set,n;
	set = n = 0;
		ns = strlen(s);
		nss = strlen(ss);
		
		for (i = 0;i<ns;++i) {
			
			for ( ii = 0;ii<nss;++ii) {
				if (ss[ii] == s[i]) {
					set = 1;
					ii = nss;//跳出循环 break?
					}
				else {
					set =0;
				}
			}
			
			if (set == 0) {
				s[n++]=s[i];			
			}
		}
		
		s[n]='\0';	
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
