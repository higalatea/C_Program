void squeeze(char s[],char ss[])
{
	int ns,nss;
	int i,ii,set,n;
	set = n = 0;
		ns = strlen(s);
		nss = strlen(ss);

		for (i = 0;i<ns;++i) {

			for ( ii = 0;ii<nss;++ii) {
				if (ss[ii] == s[i]) {
					set = 1;
					ii = nss;//跳出循环 break?
					}
				else {
					set =0;
				}
			}

			if (set == 0) {
				s[n++]=s[i];			
			}
		}

		s[n]='\0';	
	}
