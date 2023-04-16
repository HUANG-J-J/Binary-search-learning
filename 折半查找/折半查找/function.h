#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ST_len 10
#define range 100

typedef int ElemType;
typedef struct {
	ElemType* elem;   //����ָ��
	int TableLen;     //��̬�����ڵ�Ԫ�ظ���
}SSTable;

void ST_init(SSTable& ST, int len);
void ST_print(SSTable ST);
void ST_printkey(SSTable ST, int pos);
int BinarySearch(SSTable ST, ElemType key);

int compare(const void* left, const void* right);
