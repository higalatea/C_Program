//<C Program> example-1.13
#include <stdio.h>
int main()
{
	int x,i,c,nCharInWord,pc,Max,nWord[20];
	Max = nCharInWord = 0;
	pc = EOF;
	for (i = 0;i < 20;++i)
		nWord[i] = 0; 
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (pc == ' ' || pc == '\t' || pc == '\n'|| pc == EOF) 
				nCharInWord = 0;
			else {
				//Count 
				if (nCharInWord <19)
					++nWord[nCharInWord];
				else {
				//All word more than 19 char, will count in nWord[19]
					++nWord[19];
				}
				//Find and set Max
				if (Max < nCharInWord)
					Max = nCharInWord;
				//Reset nCharInWord for next count 
				nCharInWord = 0;
			}
			if (c == '\n') {
				printf("Max length is %d\n",Max);
				Max = 0;
				for (i = 0;i < 20;++i) {
					printf("%2d ",i); 
				//Printf '-' ,the number of '-' is the value of nWord[i]  
					for (x = 0;x < nWord[i];++x)
						printf("-");
					printf("\n");
				}
				for (i = 0;i < 20;++i)
					nWord[i] = 0; 
			}

		}
		else {
			if (pc == ' ' || pc == '\t' || pc == '\n'|| pc == EOF) {
				nCharInWord = 0;
				++nCharInWord;
			}
			else 
				++nCharInWord;
		}
		pc = c;
	}
}
