﻿/*
0511.

약 2200년 전에 그리스의 에라토스테네스는 최초로 지구의 크기를 측정하였다.
일단 지구를 구형으로 가정하고 또 태양 광선은 지구의 어느 곳에서나 평행하게 비친다고 가정하였다.
또 원호의 길이는 중심각에 비례한다는 원리를 사용하였다.
하지날 정오에 시에네에서 햇빛이 수직으로 비칠 때, 알렉산드리아에서는 막대와 그림자가 이루는 각도가 7.2˚로 측정되었다.
또 시에네에서 알렉산드리아까지의 거리는 약 900km로 측정되었다.
이것을 이용하여서 지구의 반지름을 계산하여라.

*/

#include <stdio.h>
#define PIE 3.14

int main(void)
{
	double r; // 지구의 반지름
	
	r = 900 * 360 / (7.2 * 2 * PIE);
	printf("지구의 반지름: %lf\n", r);

	return 0;
}