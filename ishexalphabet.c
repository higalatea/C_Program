//判断字符是否为合法的16进制字符:0~9 A~F a~f
int ishexalphabet(char alphabet)
{
	const char hexline[] = "0123456789abcdefABCDEF";
	int i;

	for (i = 0;hexline[i] != '\0';++i) {

	 	if (hexline[i] == alphabet)
			return 1; 
	}

	return 0;

}
