/* See LICENCE for licence details. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "colours.h"

int
main(int argc, char *argv[])
{
	bool running = true;
	float ap = 0.0f, pe = 0.0f, a = 0.0f;
	char c = 0;
	while (running) {
		a = (ap + pe) / 2;

		system("@cls||clear");
		colourReset();
		
		a == 0 ? colourRed() : colourGreen();
		printf("Semi-major axis = %f\n", a);
		
		colourBlue();
		printf("\n\n\n\n\nWelcome to Space Calculator\n\n");
		ap == 0 ? colourRed() : colourGreen();
		printf("1. Apoapsis: %f\n", ap);
		pe == 0 ? colourRed() : colourGreen();
		printf("2. Periapsis: %f\n", pe);
		colourYellow();
		printf("\n0. Exit\n");
		scanf("%c", &c);

		switch (c) {
			case '0':
				running = false;
				break;
			case '1':
				printf("Ap = ");
				scanf("%f", &ap);
				break;
			case '2':
				printf("Pe = ");
				scanf("%f", &pe);
				break;
		}
	}

	return 0;
}
