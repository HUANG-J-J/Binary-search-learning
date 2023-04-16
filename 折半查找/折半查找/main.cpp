#include "function.h"

int main() {
	SSTable ST;
	ST_init(ST, ST_len);
	qsort(ST.elem, ST.TableLen, sizeof(ElemType), compare);
	ST_print(ST);
	ElemType key = 0;
	printf("Please input the key:\n");
	scanf_s("%d", &key);
	BinarySearch(ST,key);
	return 0;
}

int compare(const void* left, const void* right) {
	return *(int*)left - *(int*)right;
}