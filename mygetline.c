#modified from Git branch
#include<stdio.h>
int  main()
{
	int max,c,n,i;
	max = i = 0;
	int line[1000];
	int maxline[1000];
	while((c=getchar()) != EOF) {
		
		if (c == '\n') {
			line[i] = c; 
			printf("This line Has %d char \n",i);
			++i;
			if (i > max) {
		 		printf("Max line is: \n");	
				max = i;
				for(n=0;n<i;++n) {
					maxline[n]=line[n];
					printf("%c",maxline[n]);
				}
			}
			else 
				{
					printf("Max line is: \n");
					for(n=0;n<max;++n) {
						printf("%c",maxline[n]);
				}

			}
				i=0;
		}
		else {
			line[i] = c; 
			++i;
			}
	}
}
