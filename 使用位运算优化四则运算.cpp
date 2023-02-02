int add(int a, int b)
{
	return (b == 0) ? a : add(a^b, (a&b) << 1);
}

int subtraction(int a, int b)
{
	b = add(~b, 1);
	return add(a, b);
}

int getsign(int n)
{
	return n >> 31;
}

int positive(int n)
{
	return (getsign(n) & 1) ? add(~n,1): n;
}

int multiply(int a, int b)
{
	bool flag = (getsign(a) ^ getsign(b)) ? 1 : 0;
	a = positive(a);
	b = positive(b);

	int res = 0;
	while (b) {
		if (b & 1)
			res = add(res, a);   //只有当前b末尾为1时才运算
		a = a << 1;  
		b = b >> 1;
	}
	if (flag)
		add(~res, 1);

	return res;
}

int divide(int a, int b)
{
	if (b == 0)
		throw runtime_error("DIVIDED CANNOT BE 0");

	bool flag = (getsign(a) ^ getsign(b)) ? 1 : 0;
	a = positive(a);
	b = positive(b);

	int res = 0;
	while (a >= b)
	{
		res = add(res, 1);
		a = subtraction(a, b);
	}
	return flag ? add(~res, 1) : res;
}