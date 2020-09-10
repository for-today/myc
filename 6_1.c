#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int ret = 0;
	int a[] = { 5, 6, 7, 8, 6, 5, 7 };
	int sz = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret^a[i];
	}
	printf("%d\n", ret);
	system("pause");
	return 0;

}