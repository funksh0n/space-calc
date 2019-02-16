/* See LICENCE for licence details. */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define GRAV_CONST 0.0000000000667408

int
main(int argc, char *argv[])
{
	double mass, mu, radius, semimajor_axis, velocity_squared, velocity;
	mass = atof(argv[1]);
	radius = atof(argv[2]);
	semimajor_axis = atof(argv[3]);
	mu = mass * GRAV_CONST;
	velocity_squared = mu * ( (2 / radius) - (1 / semimajor_axis) );
	velocity = 0;//sqrt(velocity_squared);

	printf("G = %.16f\n", GRAV_CONST);
	printf("\u03BC(mu) = %.16f\n", mu);
	printf("v\u00B2 = %.16f\n", velocity_squared);
	printf("v = %.16f\n", velocity);
	
	return 0;
}
