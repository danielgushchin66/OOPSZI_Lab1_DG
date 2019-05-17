#include <math.h>
#include "func.h"

double x, y;

void f()
{
	y = pow(cos(3 / 8 * M_PI - x / 4), 2) - pow(cos(11 / 8 * M_PI + 4 / x), 2);
}
