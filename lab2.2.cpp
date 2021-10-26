#include <stdio.h>
#include <math.h>

void main()
{
	double a, b, h, d, x, y, n, s, m;
	printf("a = ");
	scanf_s("%lf", &a); /*0.1*/
	printf("b = ");
	scanf_s("%lf", &b); /*0.5*/
	printf("h = ");
	scanf_s("%lf", &h); /*0.05*/
	printf("d = ");
	scanf_s("%lf", &d); /*0.001*/
	for (x = a; x <= b; x += h)
	{
		n = 1;
		s = 0;
		do {
			long fact = 1;
			for (long i = 1; i <= n; i++)
			{
				fact *= i;
			}
			long p = 1;
			int m = 3;
			for (long i = 1; i <= n; i++)
			{
				p *= (m + i - 1);
			}
			y = p / fact;
			n++;
			s += y;
		} while (fabs(y) > d);
		printf(" if x = %lf\n then s = %lf\n", x, s);
	}
}