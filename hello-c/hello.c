#include <stdio.h>

#include "screen.h"

void main(void) {
	int i;

	cls();

	for (i=0; i<10; i++) {
		printf("%2d Hello!\n", i+1);
	}
}
