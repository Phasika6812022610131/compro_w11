#include <stdio.h>

void inputScores(float arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		printf("Enter scores for Student %d:\n", i + 1);
		printf("Math: ");
		scanf("%f", &arr[i][0]);
		printf("Physics: ");
		scanf("%f", &arr[i][1]);
		printf("Chemistry: ");
		scanf("%f", &arr[i][2]);
	}
}

void printTable(float arr[3][3]) {
	printf("\nScore Table:\n");
	printf("\tMath\tPhysics\tChemistry\n");
	for (int i = 0; i < 3; i++) {
		printf("%d\t%.2f\t%.2f\t%.2f\n", i + 1, arr[i][0], arr[i][1], arr[i][2]);
	}
}

void printAverage(float arr[3][3]) {
	float sum[3] = {0};
	for (int subj = 0; subj < 3; subj++) {
		for (int stu = 0; stu < 3; stu++) {
			sum[subj] += arr[stu][subj];
		}
	}
	printf("\nAverage subject:\n");
	printf("Math: %.2f\n", sum[0] / 3.0);
	printf("Physics: %.2f\n", sum[1] / 3.0);
	printf("Chemistry: %.2f\n", sum[2] / 3.0);
}

int main() {
	float scores[3][3];
	inputScores(scores);
	printTable(scores);
	printAverage(scores);
	return 0;
}