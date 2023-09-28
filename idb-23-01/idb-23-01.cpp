#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float a, b, c, d;
	a = b = c = d = 0;
	printf("vvedite 4 chisla \n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if (a <= 0 && b <= 0) {
		if (c > 0 && d > 0) {
			if (c < d) { c = c / 7; }
			else { d = d / 7; }
		}
		else if (c > 0 && d<=0) { c = c / 7; }
		else if (d > 0 && c<=0) { d = d / 7; }
	}
	else {
		if (a < 0 && (a > b && a > c && a > d)) {
			a = a * 4;
		}
		if (b < 0 && (b > a && b > c && b > d)) {
			b = b * 4;
		}
		if (c < 0 && (c > b && c > a && c > d)) {
			c = c * 4;
		}
		if (d < 0 && (d > b && d > c && d > a)) {
			d = d * 4;
		}

	}
	printf("a=%f b=%f c=%f d=%f",a,b,c,d);
	return 1;
}
