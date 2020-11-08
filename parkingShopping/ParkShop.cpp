#include<stdio.h>

int time(int, int);
int cost(int);

int main() {

	int shopping, hour, minute, Cost;
	printf("Shopping : ");
	scanf_s("%d", &shopping);
	printf("Hour : ");
	scanf_s("%d", &hour);
	printf("Minute : ");
	scanf_s("%d", &minute);
	int b;

	if (shopping < 0 || hour < 0 || minute < 0) {
		printf("Error");
	}

	else {
		if (shopping > 0) {

			if (shopping < 1000) {
				hour = time(minute, hour) - 1;
			}

			if (shopping >= 1000) {
				hour = time(minute, hour) - 4;
			}
		}

		Cost = cost(hour);

		if (Cost < 0) {
			printf("Parking Cost = 0");
		}

		else {
			if (Cost >= 160) {
				printf("Parking Cost = 150");
			}
			else {
				printf("Parking Cost = %d", Cost);
			}
		}
	}
	return 0;
}

int time(int min, int hour) {
	int min1 = min % 60;
	if (min1 > 0) {
		min1 = 1;
	}
	if (min1 == 0) {
		min1 = 0;
	}
	hour = hour + min1;
	return(hour);
}

int cost(int h) {
	int cost = h * 30;
	return(cost);
}