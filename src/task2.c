#include <stdio.h>
#include <math.h>

double f(double x)
{
	return pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI + 4 / x), 2);
}

int main()
{
	double x, y;

	scanf("%lf", &x);
	y = f(x);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
