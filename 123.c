#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int nod(unsigned long long int a, unsigned long long int b);

int main()
{
	size_t size1 = 0;
	scanf_s("%zd", &size1);
	int* number1 = (int*)calloc(size1, sizeof(int));
	for (int i = 0; i < size1; i++) {
		scanf_s("%d", &number1[i]);
	}

	size_t size2 = 0;
	scanf_s("%zd", &size2);
	int* number2 = (int*)calloc(size1, sizeof(int));
	for (int i = 0; i < size2; i++) {
		scanf_s("%d", &number2[i]);
	}

	unsigned long long num1 = 0, num2 = 0;

	for (int i = 0; i < size1; i++) {
		num1 += number1[i] * (unsigned long long)pow(10, (double)(size1 - 1 - i));
	}

	for (int i = 0; i < size2; i++) {
		num2 += number2[i] * (unsigned long long)pow(10, (double)(size2 - 1 - i));
	}

	//printf("%llu %llu\n", num1, num2);

	unsigned long long int max = nod(num1, num2);

	//printf("%llu\n", max);

	size_t countNumber = 0;
	unsigned long long int maximum = max;
	for (size_t i = 0; maximum % 10 != 0; i++) {
		maximum = maximum / 10;
		countNumber++;
	}

	printf("%zd ", countNumber);

	int* NOD = (int*)calloc(countNumber, sizeof(int));

	size_t exp = countNumber;
	for (int i = 0; i < countNumber; i++) {
		NOD[i] = max % (unsigned long long)pow(10, double(--exp));
	}

	for (int i = 0; i < countNumber; i++) {
		printf("%d ", NOD[i]);
	}
}

unsigned long long int nod(unsigned long long int a, unsigned long long int b)
{

	unsigned long long int maxN = (a >= b) ? a : b;

	if ((a == 0) || (b == 0))
		return 0;

	for (unsigned long long int i = maxN; i > 0; i--) {

		if (a % i == 0 && b % i == 0)
			return i;

	}

	return 1;
}
