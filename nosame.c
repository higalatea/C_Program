void nosame(char s[])
{
	int i,w,j=0;
	int same = 0;

	for (i = 0; i< strlen(s);++i) {
	
		for (w = 0; w < i;++w) {
			
			if (s[w] == s[i]) {
				same = 1;
				w = i;
			}
			else {
				same = 0;
			}
		}
			
			if ( same == 0) {
				s[j++] = s[i];
			}			
	}
	s[j] = '\0';
}
//去除字符串中重复的字符
