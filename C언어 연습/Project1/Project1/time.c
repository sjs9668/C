#include <stdio.h>

void convert_time(int minutes) {
	int hour = minutes / 60;
	int min = minutes % 60;
	printf("%d½Ã°£ %dºÐ\n", hour, min);
}
int main(void) {
	int time = 118;
	convert_time(time);
	return 0;
}