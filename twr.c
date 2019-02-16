/* See LICENCE for licence details. */
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[])
{
	double thrust, mass, acceleration, force, ratio;
	thrust = atof(argv[1]);
	mass = atof(argv[2]);
	acceleration = atof(argv[3]);
	force = mass * acceleration;
	ratio = thrust / force;

	printf("m = %fkg\na = %fm/s^2\nW = m * a = %fN\n", mass, acceleration, force);
	printf("T = %fkN\nT / W = %.10fkN/N\n", thrust, ratio);
	printf("TWR = %.7f\n", ratio * 1000);

	return 0;
}
