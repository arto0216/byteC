#include <stdio.h>
int main97() {
	int i;
	int subject, score; //suject쓰는 이유를 모르겠음
	double sum_score = 0;

	printf("몇 개의 과목 점수를 입력 받을 것인가요?");
	scanf_s("%d", &subject);

	printf("\n 각 과목의 점수를 입력해 주세요 \n");
	for (i = 1; i <= subject; i++) {
		printf("과목 %d : ", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("전체 과목의 평균은 : %.0f \n", sum_score / subject);

	return 0;



}// subject와 score의 의도를 정확하게 모르겠음
// 섭잭은 각 과목이고 스코어가 점수를 뜻하는건가?