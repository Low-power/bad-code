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
	int a=12;
	a+=a-=a*a;	// WRONG: Sequence point
	printf("a = %d\n", a);
	return 0;
}

/*
此代码来自《C程序设计》（谭浩强 著，清华大学出版社 2005年7月第3版）， 第64页

附部分编译器的警告信息：

gcc (Ubuntu/Linaro 4.6.1-9ubuntu3) 4.6.1
	whr@8470p:/media/f01a9cd1-2570-4619-b4cd-41a27bdcfbd3/src/!bad-code!$ gcc -Wall shit-thq.c
	shit-thq.c: 在函数‘main’中:
	shit-thq.c:16:3: 警告： ‘a’上的运算结果可能是未定义的 [-Wsequence-point]
	shit-thq.c:16:3: 警告： ‘a’上的运算结果可能是未定义的 [-Wsequence-point]


由 PC GO 收集。
*/
