#include <stdio.h>
int main() {
	int height;
	printf("Please enter an integer value for the height of the pyramid> ");
	scanf("%d", &height);
	for (int i = 0; i < height; i++) {
		for (int j = height-i; j > 0; j--) {
			printf(" ");
		}
		printf("/");
		for (int k = 0; k < i*2; k++) {
			printf("*");
		}
		printf("\\\n");
	}
}
