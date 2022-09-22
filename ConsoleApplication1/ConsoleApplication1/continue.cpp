#include <stdio.h>
int main95() {
	int i;
	

	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;// 조건부를 점프하고 이어서 출력이 됨
		                         // 그래서 5만 제외하고 이어서 계속 출력이됨

		printf("%d", i);
}

	return 0;
}