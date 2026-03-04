// Tugas 1: Menampilkan nilai terkecil dan terbesar dari n bilangan

#include <stdio.h>

int main(void) {
	int n;

	if (scanf("%d", &n) != 1) {
		return 0;
	}

	int value;
	int min, max;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &value) != 1) {
			return 0;
		}

		if (i == 0) {
			min = value;
			max = value;
		} else {
			if (value < min) {
				min = value;
			}
			if (value > max) {
				max = value;
			}
		}
	}

	printf("%d\n", min);
	printf("%d\n", max);

	return 0;
}

