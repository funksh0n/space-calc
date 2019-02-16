/* See LICENCE for licence details. */
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
