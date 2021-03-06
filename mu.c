/* See LICENCE for licence details. */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define GRAV_CONST 6.67408E-11

int
main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Run program as 'sma mass'\n");
		return -1;
	}

	double mass, mu;
	mass = atof(argv[1]);
	mu = mass * GRAV_CONST;
	printf("%.16f\n", mu);

	return 0;
}
