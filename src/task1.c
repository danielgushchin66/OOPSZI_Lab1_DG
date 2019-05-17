#include <stdio.h>
#include <math.h>

int main()
{
	double x, y;

	x = 5;
	y = pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI + 4 / x), 2);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);

	scanf("%lf", &x);
	y = pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI + 4 / x), 2);

	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
	system("pause");
	return 0;
}
