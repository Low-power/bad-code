/*
Warning: BAD CODE!
This code is only to show the publication syntax error; The syntax errors code is usually fail to compile.
Why it is bad? See the compiler error message in the bottom.

警告：有害代码！
此代码仅用以展示出版物中的语法错误，有语法错误的代码通常无法通过编译
为什么有害？见编译器的错误提示信息。
*/

#include <stdio.h>

int main(){
	int a;
	(a=3*5)=4*3;	// Wrong code here
	printf("a=%d\n", a);
	return 0;
}

/*
此代码来自《C程序设计》（谭浩强 著，清华大学出版社 2005年7月 第3版，ISBN 978-7-302108-53-5），3.9，4；第64页。

附部分编译器的错误信息：

gcc (Ubuntu/Linaro 4.6.1-9ubuntu3) 4.6.1
	whr@8470p:/media/f01a9cd1-2570-4619-b4cd-41a27bdcfbd3/src/!bad-code!$ LANGUAGE=en gcc thq.c-program-design.syntax-error.c 
	thq.c-program-design.syntax-error.c: In function ‘main’:
	thq.c-program-design.syntax-error.c:15:9: error: lvalue required as left operand of assignment
	whr@8470p:/media/f01a9cd1-2570-4619-b4cd-41a27bdcfbd3/src/!bad-code!$ LANGUAGE=zh_CN gcc thq.c-program-design.syntax-error.c 
	thq.c-program-design.syntax-error.c: 在函数‘main’中:
	thq.c-program-design.syntax-error.c:15:9: 错误： 赋值运算的左操作数必须是左值


由 PC GO 收集。
*/
