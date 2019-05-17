#include <math.h>

double f(double x)
{
	return pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI + 4 / x), 2);
}
