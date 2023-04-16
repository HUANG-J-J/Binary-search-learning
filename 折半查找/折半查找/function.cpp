#include "function.h"

void ST_init(SSTable& ST, int len) {
	ST.TableLen = len ;
	ST.elem = (ElemType*)malloc(sizeof(ElemType) * ST.TableLen);
	int i = 0;
	srand(time(NULL));
	for (i = 0; i < ST.TableLen; i++) {
		ST.elem[i] = rand() % range;
	}
}

void ST_print(SSTable ST) {
	for (int i = 0; i < ST.TableLen; i++) {
		printf("%d ", ST.elem[i]);
	}
	printf("\n");
}

int BinarySearch(SSTable ST, ElemType key) {
	int low = 0;
	int high = ST.TableLen - 1;
	int mid = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (ST.elem[mid] < key) {
			low = mid + 1;
		}
		else if (ST.elem[mid] > key) {
			high = mid - 1;
		}
		else if (ST.elem[mid] == key) {
			printf("THE POS IS %d.\n", mid);
			return mid;
		}
	}
	printf("THE POS NOT FIND.\n");
	return -1;
}
