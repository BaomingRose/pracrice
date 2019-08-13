#if 1

#include <stdio.h>

/*静态局部变量使用static修饰符定义，即使在声明时未赋初值，编译器也会把它初始化为0。
且静态局部变量存储于进程的全局数据区，即使函数返回，它的值也会保持不变。*/
/*其作用域为局部作用域，当定义它的函数结束时，其作用域随之结束*/

void fn(void)
{
	int n = 10;

	printf("n=%d\n", n);
	n++;
	printf("n++=%d\n", n);
}

void fn_static(void)
{
	static int n = 10;

	printf("static n=%d\n", n);
	n++;
	printf("n++=%d\n", n);
}

int main(void)
{
	fn();
	printf("--------------------\n");
	fn_static();
	printf("--------------------\n");
	fn();
	printf("--------------------\n");
	fn_static();

	return 0;
}
#endif

/*运行结果：
n = 10
n++ = 11
--------------------
static n = 10
n++ = 11
--------------------
n = 10
n++ = 11
--------------------
static n = 11	（重点）
n++ = 12
*/

