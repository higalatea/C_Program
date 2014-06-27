//求绝对值
int abs(int c)
{
	if (c>=0)
		return c;
	else
		return ~(c-1);//计算机二进制中：负整数是正整数取反加1得到的，正数即是负数减1取反得到
	
}
