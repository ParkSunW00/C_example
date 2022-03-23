#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

//ex1
/* int main(void) {
	int usd;
	int knw;

	printf("달러화 금액을 입력하시오:");
	scanf("%d", &usd);

	knw = 1120 * usd;
	printf("달러화 %d달러는 한화로 %d원입니다.\n ", usd, knw);

	return 0;
} */

//ex2
/*int main(void) {
	int num1 = 10;
	int num2;

	printf("num1=%d\n", num1);
	printf("num2=%d", num2); //변수초기화를 하지않아서 오류 or 쓰레기값나옴

	return 0;
}*/

//ex3
/*int main(void) {
	int age;
	age = 20;
	printf("나이:%d", age);
 
	return 0;

}
*/

//ex4
/*#define Pi 3.141592
int main(void) {
	double r;
	double s;
	r = 2;
	s = Pi * r * r;
	printf("r =%0.2f  ,  s=%0.2f", r, s);

	return 0;
}
*/

//ex5
/*#define Pi 3.141592
int main(void) {
	double r, s;
	r = 2;
	Pi = 3.14 //전처리부분에서 상수로써 미리 선언을 해줬으므로 에러
	printf("r=%0.2f,  s=%0.2f", r, s);
	return 0;
}*/

//ex6- 오버플로우 예제
#/*include <limits.h>
int main(void) {
	short s_money = SHRT_MAX;
	unsigned short u_money = UCHAR_MAX;

	printf("1.s_money=%d\n", s_money);
	printf("1.u_money=%d\n", u_money);

	s_money = s_money + 1;
	printf("2.s_money=%d\n", s_money);
	u_money = u_money + 1;
	printf("2.u_money=%d\n", u_money);

	return 0;
}*/

//ex7
/*
int main(void) {
	float ft = 1.12345678901234567890;
	double db = 1.12345678901234567890;

	printf("float=&0.2f", ft);
	printf("double=%0.2lf", db);
	return 0;
}
*/

//ex8
/*int main(void) {
	char ch= 'A';
	printf("%c의 아스키코드  %d\n",ch,ch);
	ch += 1;
	printf("%c의 아스키코드 %d\n", ch,ch);
	return 0;
}
*/

//ex9
int main(void) {
	
}
