#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ݹ麯�����
int Fib(int n)//���庯��
{
	if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}



int main()//����Ҫ��ʾʲô
{
	int n = 0;
	int ret = 0;
		scanf("%d", &n);

		ret = Fib(n);
		printf("ret=%d", ret);

	return 0;
}