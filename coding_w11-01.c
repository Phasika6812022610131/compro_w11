#include <stdio.h>

void inputAndShow() {
	int math, physics, chemistry;
	printf("Enter Math: ");
	scanf("%d", &math);
	printf("Enter Physics: ");
	scanf("%d", &physics);
	printf("Enter Chemistry: ");
	scanf("%d", &chemistry);
	printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n", math, physics, chemistry);
}

int main() {
	inputAndShow();
	return 0;
}