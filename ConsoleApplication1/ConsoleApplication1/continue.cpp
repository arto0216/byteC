#include <stdio.h>
int main95() {
	int i;
	

	for (i = 0; i < 100; i++) {
		if (i % 5 == 0) continue;// ���Ǻθ� �����ϰ� �̾ ����� ��
		                         // �׷��� 5�� �����ϰ� �̾ ��� ����̵�

		printf("%d", i);
}

	return 0;
}