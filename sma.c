/* See LICENCE for licence details. */

/* Example:
 * Apoapsis = 300km
 * Periapsis = 172km
 * r1 = Apoapsis + Earth Radius = 6.678*10^6
 * r2 = Periapsis + Earth Radius = 6.543*10^6
 * ./sma 6.678E+6 6.543E+6
 */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	double r1, r2, a;
	r1 = atof(argv[1]);
	r2 = atof(argv[2]);
	a = (r1 + r2) / 2;

	printf("r1 = %fm\nr2 = %fm\n", r1, r2);
	printf("Semi-major axis = %.2fm\n", a);

	return 0;
}
