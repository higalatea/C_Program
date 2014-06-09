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
//获取一个字符串，并返回长度。
