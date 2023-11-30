#include <bits/stdc++.h>

using namespace std;

string get_sum(string num1, string num2)
{
	int max1;
	string c;
	int n = num1.length(), m = num2.length();
	max1 = max(m, n);
	while (n < max1)
	{
		num1 = '0' + num1;
	}
	while (m < max1)
	{
		num2 = '0' + num2;
	}
	for (int i = max1 - 1; i > 0; i--)
	{
		c[i] = num1[i] - '0' + num2[i] - '0';
		if (c[i] > '9')
		{
			c[i] -= 10;
			c[i - 1]++;
		}
		/* code */
	}
	if (num1[0] - '0' + num2[0] - '0' > '9')
		c = '1' + c;
	return c;
}

int main()
{
	string a, b, c;
	cin >> a >> b;
	c = get_sum(a, b);
	cout << a << "\n"
		 << b << c;
}