/*
Warning: BAD CODE!
This code is only for testing compilers warning information
You need to turn on all the warning of your compiler (ex. -Wall for gcc)

警告：有害代码！
此代码仅用以测试编译器的警告信息
你需要启用编译器上的所有警告信息（例：gcc 加 -Wall 参数）
*/

#include <stdio.h>

int main(){
	int a = 10, b = 10;
	a += b -= a *= b /= 3;	// WRONG: Sequence point
	printf("a = %d, b = %d", a, b);
	putchar('\n');
	return 0;
}

/*
此代码来自《C语言程序设计项目教程》（东软电子出版社 2011.8， ISBN 978-7-900491-74-9），第2章；第33页，自测题部分，第1题。

附部分编译器的警告信息：

gcc (Ubuntu/Linaro 4.6.1-9ubuntu3) 4.6.1
	whr@8470p:/tmp$ gcc -Wall 978-7-900491-74-9.2001-8.1.2.p33.test-1.c
	978-7-900491-74-9.2001-8.1.2.p33.test-1.c: 在函数‘main’中:
	978-7-900491-74-9.2001-8.1.2.p33.test-1.c:5:9: 警告： ‘b’上的运算结果可能是未定义的 [-Wsequence-point]
	978-7-900491-74-9.2001-8.1.2.p33.test-1.c:5:4: 警告： ‘a’上的运算结果可能是未定义的 [-Wsequence-point]


由 PC GO 收集。
*/
