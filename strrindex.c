//返回t在s中最右边出现的位置
int strrindex(char s[], char t[])
{
	int i, j, k, m = -1;
        for (i = 0; s[i] != '\0'; i++) {
			for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++) //寻找s中的t字符串
				;
			if (k > 0 && t[k] == '\0')//m存储s中每次出现t字符串的位置
				m = i;
		}
        return m;//返回最后一次获得的m值，即t在s中最右边出现的位置
}
