#include <stdio.h>

int main(void)
{
	int age = 20;
	double gpa = 3.88f;
	char gender = 'M';
	float weight = 62.489F;

	printf("성별: %c\n", gender);
	printf("이름: %s\n", "안 병훈");
	printf("나이: %d\n", age);
	printf("성별: %.2f\n", weight);
	printf("평균평점(GPA): %.3f\n", gpa);

	return 0;
}