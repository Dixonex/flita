#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int a = 0, k = 1;
	while (k <= 2) {
		printf("enter the number of elements of set %d: ", k);
		scanf("%d", &a);
		int m[1000];
		printf("enter the elements of set %d\n", k);
		for (int i = 1; i <= a; i++) {
			printf("%d:", i);
			scanf("%d", &m[i]);
		}
		printf("your set %d:\n", k);
		for (int i = 1; i <= a; i++) {
			printf("%d: %d\n", i, m[i]);
		}
		printf("do you want to add the new element? Yes=1 No=0\n");
		int b = 0;
		scanf("%d", &b);
		while (b != 0 && b != 1)
			scanf("%d", &b);
		if (b == 1) {
			int n = 1;
			while (n > 0) {
				printf("enter the number of element: ");
				scanf("%d", &n);
				if (n <= 0) break;
				int c = a;
				a++;
				while (c >= n) {
					m[c + 1] = m[c];
					c--;
				}
				printf("enter the element N%d ", n);
				int k;
				scanf("%d", &k);
				m[n] = k;
				printf("your new set:\n");
				for (int i = 1; i <= a; i++) {
					printf("%d:%d\n", i, m[i]);
				}
			}
		}
		printf("do you want to remove the element? Yes=1 No=0\n");
		int b1 = 0;
		scanf("%d", &b1);
		while (b1 != 0 && b1 != 1)
			scanf("%d", &b);
		if (b1 == 1) {
			int n1 = 1;
			while (n1 > 0) {
				printf("enter the number of element: ");
				scanf("%d", &n1);
				if (n1 <= 0) break;
				int c1 = n1;
				a--;
				while (c1 <= a) {
					m[c1] = m[c1 + 1];
					c1++;
				}
				printf("your new set %d:\n", k);
				for (int i = 1; i <= a; i++) {
					printf("%d:%d\n", i, m[i]);
				}
			}
		}
		k++;
	}
	return 0;
}