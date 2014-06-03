#include <stdio.h>
int getline(char s[]);

int main()
{

	char line[1000];
	int n,i,w;
	while (1) {
		printf("number of string:%d \n",n = getline(line));
		if (line[n - 2] == ' '|| line[n - 2] == '\t') {
			for (i = n - 2;line[i] == ' '|| line[i] == '\t';--i)
				;
		w = i+1;
		printf("last no white :%d\n",w);
		
		printf("After practice:\n");
		for (i = 0;i<w;++i)
			printf("%c",line[i]);
		printf("\n");
		}
	  else
		printf("No white end of this line!\n");   
	}
}

int getline(char s[])
{
	int c,i;
	
	for (i = 0;(c = getchar()) != EOF && c != '\n';++i)
		s[i] = c;
		
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	
	s[i] = '\0';
	
	return i;
}
