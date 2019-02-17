/* See LICENCE for licence details. */

/* Example:
 * Earth Mass = 5.97237*10^24
 * Altitude = 172km
 * Radius = Altitude + Earth Radius = 6.543*10^6
 * Semi-major Axis = 11000km = 1.1*10^7
 * ./ov 5.97237E+24 6.543E+6 1.1E+7
 */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define GRAV_CONST 6.67408E-11

int
main(int argc, char *argv[])
{
	double mass, mu, radius, semimajor_axis, velocity_squared, velocity;
	mass = atof(argv[1]);
	radius = atof(argv[2]);
	semimajor_axis = atof(argv[3]);
	mu = mass * GRAV_CONST;
	velocity_squared = mu * ( (2 / radius) - (1 / semimajor_axis) );
	velocity = sqrt(velocity_squared);

	printf("G = %.16f\n", GRAV_CONST);
	printf("\u03BC(mu) \u2248 %.2f\n", mu);
	printf("v\u00B2 \u2248 %.2f\n", velocity_squared);
	printf("v \u2248 %.2fm/s\n", velocity);
	
	return 0;
}
