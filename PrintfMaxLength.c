//统计你输入的单词中的每个单词的长度,并打印出其中最长单词的字符数。
#include <stdio.h>
int main()
{
	int c,nCharInWord,pc,Max;
	Max = nCharInWord = 0;
	pc = EOF;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			if (pc == ' ' || pc == '\t' || pc == '\n'|| pc == EOF) 
				nCharInWord = 0;
			else {
				printf("Pre Word has %d char\n",nCharInWord);
				if (Max < nCharInWord)
					Max = nCharInWord;
				nCharInWord = 0;
			}
			if (c == '\n') {
				printf("Max length is %d\n",Max);
				Max = 0;
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
