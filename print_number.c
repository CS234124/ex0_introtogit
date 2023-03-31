#include <stdio.h>

int course_number[6] = {2,3,4,1,2,4};
int main() {
	for(int i = 6; i > 0; i--) {
		printf("%d", course_number[i]);
	}

	printf("/n");
	return 0;
}
