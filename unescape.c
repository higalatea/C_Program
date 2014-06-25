void unescape(char s[],char t[])
{
	int i,j;
	i=j=0;
	
	while(t[i]){
	
		switch (t[i]) {
			
			case '\\':
	
				switch (t[i+1]) {
				
									
					case 'n':
						s[j++]='\n';
						++i;
						break;
					case 't':
						s[j++]='\t';
						++i;
						break;
					case 'a':
						s[j++]='\a';
						++i;
						break;
					case 'b':
						s[j++]='\b';
						++i;
						break;
					case 'f':
						s[j++]='\f';
						++i;
						break;
					case 'r':
						s[j++]='\r';
						++i;
						break;
					case '\\':	
						s[j++]='\\';
						++i;
						break;
					case 'v':
						s[j++]='\v';
						++i;
						break;
					
					case '\"':
						s[j++]='\"';
						++i;
						break;
					default:
						s[j++]=t[i];
						break;
				}
				
				break;
			default:
				s[j++]=t[i];
				break;
		}

	++i;
	}
	
	s[j]='\0';
}
