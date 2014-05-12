//Count lines of Space table and Enter
#include <stdio.h>
int main()
{
	int chars,cs,ct,ce;
	cs = 0;
	ct = 0;
	ce = 0;
	while ((chars = getchar()) != EOF) {
		if (chars == 32)
			++cs;
		if (chars == '\t')
			++ct;
		if (chars == '\n') {
			++ce;
			printf("You input %d Space char \n",cs);
			printf("You input %d Table char \n",ct);
			printf("You input %d Enter char \n",ce);
		}
	}
}
