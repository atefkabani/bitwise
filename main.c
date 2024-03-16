#include <stdio.h>
void convertToBinary(int value);
int setBit(int value, int bit);
int clearBit(int value, int bit) ;
int ToggleBit(int value, int bit);

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int num = 11;
	int bit = 2;
	int converted;
	printf("Number is %d\n ", num);

	//Display in Binary
	printf("Binary Representation is = ");
	 convertToBinary(num);
		printf("\n");

	//Set Bit
		printf("%d set Bit No %d = ", num, bit);
	converted = setBit(num, bit);
	printf("%d\n ", converted);
	printf("Binary Representation is = ");
	convertToBinary(converted);
	printf("\n");

	//Clear Bit
	printf("%d clear Bit No %d = ", num, bit);
	converted = clearBit(num, bit);
	printf("%d\n ", converted);
	printf("Binary Representation is = ");
	convertToBinary(converted);
	printf("\n");

	//Toggle Bit
	printf("%d Toggle Bit No %d = ", num, bit);
	converted = ToggleBit(num, bit);
	printf("%d\n ", converted);
	printf("Binary Representation is = ");
	convertToBinary(converted);
	printf("\n");

	return 0;

}

void convertToBinary(int value) {
	int arr[8];
	int i = 0;
	while (value != 0) {
		arr[i++] = value % 2;
		value /= 2;
	}
	for (int j = i - 1; j >= 0; j--)
		printf("%d", arr[j]);
	printf("\n");
}

int setBit(int value, int bit) {
	return value | (1 << bit);
}

int clearBit(int value, int bit) {
	return value & ~(1 << bit);
}

int ToggleBit(int value, int bit) {
	return value ^  (1 << bit);
}
