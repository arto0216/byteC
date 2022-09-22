#include <stdio.h>
int main4() {
	char ch; //문자

	short sh; //정수
	int i;
	long lo;

	float fl; // 실수
	double du;

	printf("char 형 변수 입력 : ");
	scanf_s("%c", &ch);


	printf("short 형 변수 입력 : ");
	scanf_s("%hd", &sh);
	printf("int 형 변수 입력 : ");
	scanf_s("%d", &i);
	printf("long 형 변수 입력 : ");
	scanf_s("%ld", &lo);

	printf("float 형 변수 입력");
	scanf_s("%f", &fl);
	printf("double", &du);
	scanf_s("%lf", &du);

	printf("char : %c , short : %d , int : %d ", ch, sh, i);
	printf("long : %ld , flaot : %f, double : %f \n", lo, fl, du);
	return 0;
    

	//뭘 배웠지 ?
		//• char 은 1 바이트 정수를 저장하는 타입으로, 주로 문자를 저장하는데 사용됩니다.
		//• 각 문자들은 아스키 테이블이란 표를 통해 특정 정수와 대응되어 있습니다.예를 들어서
		//65 는 알파벳 A 와 대응됩니다.
		//• scanf 를 통해 사용자로 부터 데이터를 받을 수 있습니다.
		//• % c 는 문자, % d 는 정수, % f 는 float, % lf 는 double 을 받습니다
}