/*
Warning: BAD CODE!
This code is only for testing compilers warning information
You need to turn on all the warning of your compiler (ex. -Wall for gcc)
Why it is bad? Between the previous and next sequence point, a value of the same variable is changed several times, the behavior is undefined. See ISO/IEC 9899:1990, 3.3
Therefore, this coding should be strictly ban!

警告：有害代码！
此代码仅用以测试编译器的警告信息
你需要启用编译器上的所有警告信息（例：gcc 加 -Wall 参数）
为什么有害？在两个序点之间，同一变量的值被多次改变，其行为是未定义的。参见 ISO/IEC 9899:1990，3.3
因此，这种编码应严格禁止！
*/

#include <stdio.h>

int main(){
	int a=12;
	a+=a-=a*a;	// WRONG: Sequence point
	printf("a = %d\n", a);
	return 0;
}

/*
此代码来自《C程序设计》（谭浩强 著，清华大学出版社 2005年7月第3版）；第64页

附部分编译器的警告信息：

gcc (Ubuntu/Linaro 4.6.1-9ubuntu3) 4.6.1
	whr@8470p:/media/f01a9cd1-2570-4619-b4cd-41a27bdcfbd3/src/!bad-code!$ gcc -Wall shit-thq.c
	shit-thq.c: 在函数‘main’中:
	shit-thq.c:19:3: 警告： ‘a’上的运算结果可能是未定义的 [-Wsequence-point]
	shit-thq.c:19:3: 警告： ‘a’上的运算结果可能是未定义的 [-Wsequence-point]


由 PC GO 收集。
*/
