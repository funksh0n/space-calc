/* See LICENCE for licence details. */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "colours.h"

#define gotoxy(x,y) printf("\033[%d;%dH", (x), (y))
int
main(int argc, char *argv[])
{
	bool running = true;
	float ap1 = 0.0f, pe1 = 0.0f, a1 = 0.0f, ap2 = 0.0f, pe2 = 0.0f, a2 = 0.0f;
	char c = 0;
	while (running) {
		a1 = (ap1 + pe1) / 2;
		a2 = (ap2 + pe2) / 2;

		system("@cls||clear");
		colourReset();
		
		printf("Current:\n");
		a1 == 0 ? colourRed() : colourGreen();
		printf("Semi-major axis = %f\n", a1);
		ap1 == 0 ? colourRed() : colourGreen();
		printf("Apoapsis (ap1) = %f\n", ap1);
		pe1 == 0 ? colourRed() : colourGreen();
		printf("Periapsis (pe1) = %f\n", pe1);

		colourReset();
		gotoxy(0,32);
		printf("Target:\n");
		gotoxy(2,32);
		a2 == 0 ? colourRed() : colourGreen();
		printf("Semi-major axis = %f\n", a2);
		gotoxy(3,32);
		ap2 == 0 ? colourRed() : colourGreen();
		printf("Apoapsis (ap2) = %f\n", ap2);
		gotoxy(4,32);
		pe2 == 0 ? colourRed() : colourGreen();
		printf("Periapsis (pe2) = %f\n", pe2);
		
		colourReset();
		printf("\n\n\n\n\nWelcome to Space Calculator\n\n");
		printf("1. ap1\n");
		printf("2. pe1\n");
		printf("3. ap2\n");
		printf("4. pe2\n");
		printf("5. Burn at (ap)");
		colourYellow();
		printf("\n0. Exit\n");
		scanf("%c", &c);

		switch (c) {
			case '0':
				running = false;
				break;
			case '1':
				printf("ap1 = ");
				scanf("%f", &ap1);
				break;
			case '2':
				printf("pe1 = ");
				scanf("%f", &pe1);
				break;
			case '3':
				printf("ap2 = ");
				scanf("%f", &ap2);
				break;
			case '4':
				printf("pe2 = ");
				scanf("%f", &pe2);
				break;
		}
	}

	return 0;
}
