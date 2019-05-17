#include <stdio.h>
#include <math.h>

void f();
double x, result;

int main()
{
	scanf("%lf", &x);
	f();

	printf("x = %.4f\n", x);
	printf("result = %.4f\n", result);
	
	system("pause");
	return 0;
}

void f()
{
	result = pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI + 4 / x), 2);
}
