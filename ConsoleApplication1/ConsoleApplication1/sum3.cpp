#include <stdio.h>
int main97() {
	int i;
	int subject, score; //suject���� ������ �𸣰���
	double sum_score = 0;

	printf("�� ���� ���� ������ �Է� ���� ���ΰ���?");
	scanf_s("%d", &subject);

	printf("\n �� ������ ������ �Է��� �ּ��� \n");
	for (i = 1; i <= subject; i++) {
		printf("���� %d : ", i);
		scanf_s("%d", &score);
		sum_score = sum_score + score;
	}
	printf("��ü ������ ����� : %.0f \n", sum_score / subject);

	return 0;



}// subject�� score�� �ǵ��� ��Ȯ�ϰ� �𸣰���
// ������ �� �����̰� ���ھ ������ ���ϴ°ǰ�?