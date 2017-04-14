#include <stdio.h>
#include <stdlib.h>

#define TRUE 0
#define FALSE -1

static int a = 10;

void func(int *arg)
{
	*arg += 1; 
}

void main()
{
	int b = 11;
	int *p = malloc(sizeof(b));

	func(&b);
	func(&a);

	printf("局部变量b的值是：%d\n",b);
	printf("静态变量a的值是：%d\n",a);
}
