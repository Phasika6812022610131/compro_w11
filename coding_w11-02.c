#include <stdio.h>

float average(int a, int b, int c) {
	return (a + b + c) / 3.0f;
}

int main() {
	int math, physics, chemistry;
	printf("Enter Math score: ");
	scanf("%d", &math);
	printf("Enter Physics score: ");
	scanf("%d", &physics);
	printf("Enter Chemistry score: ");
	scanf("%d", &chemistry);

	float avg = average(math, physics, chemistry);

	printf("\nMath = %d\n", math);
	printf("Physics = %d\n", physics);
	printf("Chemistry = %d\n", chemistry);
	printf("Average = %.2f\n", avg);

	return 0;
}