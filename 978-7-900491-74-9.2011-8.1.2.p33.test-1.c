/*
Warning: BAD CODE!
This code is only for testing the warning of compilers 
You need to turn on all warnings of your compiler (ex. add -Wall for gcc)
Why it is bad? Between the previous and next sequence point, a value of the same variable is changed several times, the behavior is undefined. See ISO/IEC 9899:1990, 6.3; and ISO/IEC 9899:1999，6.5
Therefore, this coding should be strictly ban!

警告：有害代码！
此代码仅用以测试编译器的警告信息
你需要启用你的编译器的所有警告信息（例如：gcc 加 -Wall 参数）
为什么有害？在相邻的两个序点之间，同一变量的值被多次改变，其行为是未定义的。参见 ISO/IEC 9899:1990，6.3；和 ISO/IEC 9899:1999，6.5
因此，这种编码应严格禁止！
*/

#include <stdio.h>

int main() {
	int a = 10, b = 10;
	a += b -= a *= b /= 3;		// Wrong code here
	printf("a = %d, b = %d", a, b);
	putchar('\n');
	return 0;
}

/*
此代码来自《C语言程序设计项目教程》（东软电子出版社 2011.8， ISBN 978-7-900491-74-9），第2章；第33页，自测题部分，第1题。

附部分编译器的警告信息：

gcc (Ubuntu/Linaro 4.6.1-9ubuntu3) 4.6.1
	whr@8470p:/media/f01a9cd1-2570-4619-b4cd-41a27bdcfbd3/src/!bad-code!$ LANGUAGE=en gcc -Wall 978-7-900491-74-9.2011-8.1.2.p33.test-1.c
	978-7-900491-74-9.2011-8.1.2.p33.test-1.c: In function ‘main’:
	978-7-900491-74-9.2011-8.1.2.p33.test-1.c:19:9: warning: operation on ‘b’ may be undefined [-Wsequence-point]
	978-7-900491-74-9.2011-8.1.2.p33.test-1.c:19:4: warning: operation on ‘a’ may be undefined [-Wsequence-point]
	whr@8470p:/media/f01a9cd1-2570-4619-b4cd-41a27bdcfbd3/src/!bad-code!$ LANGUAGE=zh_CN gcc -Wall 978-7-900491-74-9.2011-8.1.2.p33.test-1.c
	978-7-900491-74-9.2011-8.1.2.p33.test-1.c: 在函数‘main’中:
	978-7-900491-74-9.2011-8.1.2.p33.test-1.c:19:9: 警告： ‘b’上的运算结果可能是未定义的 [-Wsequence-point]
	978-7-900491-74-9.2011-8.1.2.p33.test-1.c:19:4: 警告： ‘a’上的运算结果可能是未定义的 [-Wsequence-point]


由 PC GO 收集。
*/
