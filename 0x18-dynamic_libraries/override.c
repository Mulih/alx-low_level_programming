#include <stdlib.h>

static int current_call = 0;
static int numbers[6] = {9, 8, 10, 24, 75, 9};

int rand() {
	if (current_call < 6) {
		return numbers[current_call++];
	} else {
		return 1;
	}
}
