#include <stdio.h>
int main96() {
	int usranswer;

	printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������! \n");

	for (;;) {
		scanf_s("%d", &usranswer); //usranswer ������ ����
		if (usranswer == 3) {
			printf("���߼̱���! \n");
			break; // ������ ������������ �̾�ϰ� ���ִ� ����
		}
		else  {// �̰� �� ��������?
			printf("Ʋ�Ⱦ��! \n");
		}
	}
	return 0;
}