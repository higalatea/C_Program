//转换字符串中表达合法的16进制为10进制整型数，包含0x和0X
//条件：字符串行首为空白字符或0x或0X，其后若出现非表达16进制的字符【a-f A-F 0-9】则结果为0
unsigned long long int htoi(const char s[])
{
	unsigned long long int answer = 0;//最終要返回的結果
	unsigned long long int pchex = 0;//保存上一次得到的值
	unsigned char stoi = 0;//保存將16進制合法字符轉換為對應的10進制的值
	int i=0;

	for (i = 0;s[i] == ' ' || s[i] == '\n'||s[i] == '\t';++i)//跳過空白
		;

	/*跳過0x與0X*/	
	if (s[i] == '0')
		if ((s[i+1] == 'x')|| (s[i+1] == 'X'))
			i = i + 2;


	/*此时字符数组s中下角标为i的值，即为第一位可取的16进制的有效值*/


	/*循环判断每个字符是否为16进制的合法字符，若不是则直接返回0，否则进行转换*/
	while (s[i] != '\0') {

		if (!ishexalphabet(s[i])) 
			return 0;
		else {


			if (s[i] >= 65 && s[i] <= 70)//将大写的字符A-F转为10进制数字
				stoi = s[i] -'A' + 10;
			else if (s[i] >= 97 && s[i] <= 102)//将小写的字符a-f转为10进制数字
				stoi = s[i] - 'a' + 10;
			else
				stoi = s[i] - '0';//将其他的字符0-9转为对应的10进制数字


			/*每次后面出现一个合法的16进制字符，之前的值便前移4位，将新值加入最右边的4位*/
			answer = pchex|stoi;//取得本次值
			pchex = answer;
			pchex <<=4;//左移4位 为下一次数据留出位置
		}
	++i;

	}

	return answer;

}
