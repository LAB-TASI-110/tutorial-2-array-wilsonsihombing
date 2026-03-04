// Tugas 2: Menampilkan nilai terkecil, terbesar, dan rata-rata berurutan terendah

#include <stdio.h>

int main(void) {
	int n;

	if (scanf("%d", &n) != 1) {
		return 0;
	}

	if (n <= 0) {
		return 0;
	}

	int arr[n];
	int min, max;

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			return 0;
		}

		if (i == 0) {
			min = arr[i];
			max = arr[i];
		} else {
			if (arr[i] < min) {
				min = arr[i];
			}
			if (arr[i] > max) {
				max = arr[i];
			}
		}
	}

	double min_avg = 0.0;
	if (n >= 2) {
		min_avg = (arr[0] + arr[1]) / 2.0;
		for (int i = 1; i < n - 1; i++) {
			double avg = (arr[i] + arr[i + 1]) / 2.0;
			if (avg < min_avg) {
				min_avg = avg;
			}
		}
	}

	printf("%d\n", min);
	printf("%d\n", max);
	if (n >= 2) {
		printf("%.2f\n", min_avg);
	}

	return 0;
}

