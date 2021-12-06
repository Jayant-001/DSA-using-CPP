#include <stdio.h>

int main() {

	int arr[5];
	for(int i = 0; i < 5; i++) {
		arr[i] = 2+i;
	}

	for(int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	printf("%d\n", &(*arr));

	for(int i = 0; i < 5; i++) {
		printf("%d ", *(arr+i));
	}


	return 0;
}