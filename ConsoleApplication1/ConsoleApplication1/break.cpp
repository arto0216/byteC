#include <stdio.h>
int main96() {
	int usranswer;

	printf("컵퓨터가 생각한 숫자를 맞추어 보세요! \n");

	for (;;) {
		scanf_s("%d", &usranswer); //usranswer 유저의 생각
		if (usranswer == 3) {
			printf("맞추셨군요! \n");
			break; // 루프를 빠져나간다음 이어서하게 해주는 역할
		}
		else  {// 이건 뭔 역할이지?
			printf("틀렸어요! \n");
		}
	}
	return 0;
}