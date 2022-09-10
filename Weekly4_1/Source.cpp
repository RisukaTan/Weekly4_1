#include<stdio.h>//65010536
int main() {
	int n, h, k;
	scanf_s("%d", &n);
	h = 1;
	while (h <= n) {
		k = 1;
		while (k <= n) {
			printf(" *");
			k = k + 1;
		}
		printf("\n");
		h = h + 1;
	}
}