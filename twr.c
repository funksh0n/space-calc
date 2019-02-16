/* See LICENCE for licence details. */
#include <stdio.h>

int
main(int argc, char *argv[])
{
	double thrust, mass, acceleration, force, ratio;
	thrust = argv[1];
	mass = argv[2];
	acceleration = argv[3];
	force = mass * acceleration;
	ratio = thrust / force;

	printf("m = %dkg\na = %dm/s^2\nW = m * a = %dN\n", mass, acceleration, force);
	printf("T = %dkN\nT / W = %dkN/N\n", thrust, ratio);
	printf("TWR = %d", ratio * 1000);
}
