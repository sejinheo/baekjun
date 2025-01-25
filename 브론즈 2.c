#include <stdio.h>

int main()
{
	int n,a,b;
	int result = 1;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		 scanf("%d %d", &a, &b);

		for (int j = 0; j < b; j++)
		{
			result *= a;
			result %= 10;
		}
		if (result == 0)
		{
			result = 10;
		}
		printf("%d\n", result);
		result = 1;
	}
	return 0;
}