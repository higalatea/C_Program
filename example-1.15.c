#include <stdio.h>
int main()
{
	int wenduzhuanhuan(int sheshi);
	int lower,upper,step,huashi,sheshi;
	lower = 0;
	upper = 300;
	step = 20;
	sheshi = lower;
	while (sheshi <= upper) {
		printf("sheshi %d is huashi %d\n",sheshi,wenduzhuanhuan(sheshi));
		sheshi = sheshi + step;
	}
}

int wenduzhuanhuan(int sheshi)
{
		int huashi;
		huashi = sheshi * 9 / 5 +32;
		return huashi;
}
