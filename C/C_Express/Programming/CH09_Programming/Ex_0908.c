﻿/*
0908.

순환 호출을 이용하여 정수의 각 자리수를 출력하는 함수 show_digit(int x)를 작성하고 테스트하라.
즉 정수가 1234이면 화면에 1 2 3 4와 같이 출력한다.
함수는 일의 자리를 출력하고 나머지 부분을 대상으로 다시 같은 함수를 순환 호출한다.
예를 들어서 1234의 4를 출력하고 나머지 123을 가지고 다시 같은 함수를 순환 호출한다.
1234를 10으로 나누면 123이 되고 4는 1234를 10으로 나눈 나머지이다.

*/

#include <stdio.h>

void show_digit(int x)
{
	int r; // 한자리 수
	if (x < 10)
		r = x;
	else
	{
		r = x % 10;
		show_digit(x / 10); // 순환 호출
	}
		
	printf("%d ", r);
}

int main(void)
{
	int x;
	printf("4자리 정수 입력: ");
	scanf_s("%d", &x);

	show_digit(x);

	return 0;
}