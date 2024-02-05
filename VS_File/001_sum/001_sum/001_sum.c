#include <stdio.h>

int main() {
	int targe = 10;
	int arr[5] = { 1, 2, 3, 6, 9, };
	for (int i= 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (arr[i] + arr[j] == targe) {
				if (i > j) {
					printf("[%d,%d]", j, i);
				}else {
					printf("[%d,%d]", j, i);
				}
			}
		}
	}
	return 0;
}