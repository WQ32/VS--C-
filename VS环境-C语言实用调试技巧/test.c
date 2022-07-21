#include <stdio.h>
// 1.结构：是一些值的集合，这些值被称为成员变量，结构体的每个成员可以是不同类型的变量
// 2.结构的声明
// struct tag
// {
//  	member - list;
//  }variable-list;       //变量列表，如s1,s2,s3;(一般不同，全局变量少用)

////描述一个学生，一些数据
//struct Stu       //struct结构体的关键字，Stu叫结构体标签，Sstruct Stu-结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;            // 定义结构体类型（此刻类型没有占内存），相当于图纸  
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;               // s1,s2,s3是三个全局变量，类型相同   
//
//int main()
//{
//	struct Stu s1;    // 创建结构体变量（此时占内存），相当于建好的房子
//					 // 此处的s是局部的结构体变量
//	return 0;
//}
//
//typedef struct Stu       // typeof把此类型重新起一个名字Stuu,此处Stuu是类型
//                         //此方法更好
//{
//	char name[20];
//	short age;          
//	char tele[12];
//	char sex[5];
//}Stuu;
//
//int main()
//{
//	Stuu s2;
//	return 0;
//}

// 3.结构体成员的类型：标量（普通变量），指针，数组，甚至是其他结构体
// 4.结构体变量的定义和初始化
//int main()
//{
//	Stuu s2 ={"正三",20,"19583593346","男"};   //初始化也用{}
//	return 0;
//}
//// 例：
//
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = { "hello bit\n" };
//	struct T t = { "haha",{2003,"hello world","bbbbb",3.14},arr};
//	printf("%s\n", t.ch);    // 结构体成员的访问
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[10];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void print1(Stu s)
//{
//	printf("name: %s\n", s.name);
//	printf("age: %d\n", s.age);
//	printf("telephone: %s\n", s.tele);
//	printf("sex: %s\n", s.sex);
//}
//
//void print2(Stu* s)
//{
//	printf("name: %s\n", s->name);
//	printf("age: %d\n", s->age);
//	printf("telephone: %s\n", s->tele);
//	printf("sex: %s\n", s->sex);
//}
//
//int main()
//{
//	Stu s = { "王棋",19,"19583593346","女" };
//	// 打印结构体数据，print2方法好，传的是地址，不用再考虑占内存
//	// 而print1方法，要新开辟一个空间，占内存
//  // 函数传参时：参数是需要压栈的，如果传递一个数据体对象时，
//  // 结构体过大,参数压栈的系统开销比较大，所以会导致性能的下降
//	print1(s);
//	printf("\n");
//	print2(&s);       //传地址
//	return 0;
//}

// 栈区: - 局部变量，函数的形式参数，函数调用也开辟空间
// 堆区: - 动态内存分配，malloc/free,realloc,calloc
// 静态区： - 全局变量，静态变量
// 传参的过程中存在压栈（插入一个元素：压栈  ；删除一个元素：出栈），
// 栈的数据结构特点：先进栈的后出，后进栈的先出（从栈顶入）
// 函数栈帧的创建和销毁

#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	system("pause");
//	return 0;
//}

// test.c            可执行程序
// Debug(调试版本)  Debug版本的可执行程序（包括调试信息，不做优化，便于调试程序）

// Release(发布版本) Release版本的可执行程序（往往进行了各种优化(功能上)，是得程序在代码大小和运行
//                                     速度上都是最优的，以便用户很好地使用）

// fn + F5 -启动调试-和F9配合调试 
// 断点-F9切换断点（红点）-代码执行到此处停止（右击断点，可以选择条件）
// 逐过程-F10（把函数当成一个过程，执行时直接跳过，不会进入其中）
// 逐语句-F11（遇到函数会进入函数内部）   shift + fn + F11(跳出当前所在的函数内部)

//int Add(int m, int n)
//{
//	return m + n;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}

// 自动窗口（自动添加上下文中的变量进行观察）

//void test2()
//{
//	printf("HeHe!");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//// 示例1.求1！+2！+3！…+n！  不考虑溢出
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", arr);    // Debug版本下 i的地址大于arr的地址；Release版本优化后就变了
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	printf("hehe!");
//	//	arr[i] = 0;     // 此处越界访问，本来arr只有10个元素，但这里访问了13个
//	//}                   // arr[12]=0时，i变成了0，重新开始；&arr[12] = &i
//	//system("pause");
//	return 0;           // 解释：arr和i两个局部变量都是放在栈里面的，栈使用空间的习惯是
//	                    // 先使用高地址，再使用低地址,所以arr的地址在i地址的下面
//	                    // 而随着数组下标的增长，地址由低到高变化，所以如果数组合适地向上越界，
//	                    // 就有可能在越界的过程中遇到i，所以在越界改变数组的时候就可能改变i
//	                    // 就可能导致程序死循环（不同编译器下越界的位置可能是不同的）
//}   //《C陷阱与缺陷》
////  1.栈区的默认使用空间 ：先使用高地址的空间，再使用低地址的空间； 
////  2.数组随着下标的增长，地址由低到高变化

//设计自己函数实现strcpy拷贝
////void my_strcpy(char* dest, char* src)
////{
////	while (*src != '\0')
////	{
////		*dest = *src;         // 6'
////		src++;
////		dest++;
////	}
////	*dest = *src;
////}
//
////void my_strcpy(char* dest, char* src)
////{
////	if (dest != NULL && src != NULL)   // 把问题给规避了
////	{
////		while (*dest++ = *src++)
////		{
////			;                     // 7'
////		}
////	}
////}
//
////#include <assert.h>
////
////void my_strcpy(char* dest,const char* src)  // *src前加了const,不能再被改变
////{
////	assert(dest != NULL);  // 断言括号为真，断言不会有任何问题
////	assert(src != NULL);   // 断言
////
////	while (*dest++ = *src++)
////	{                    
////		;                   // 8'
////	}
////}
//
////int main()
////{
////	char arr1[] = "##########";
////	char arr2[] = "bit";
////	my_strcpy(arr1, arr2);// strcpy字符串拷贝
////	printf("%s\n", arr1);
////	return 0;
////}
//
////优化
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;    //将首元素地址存起来
//	assert(dest != NULL); // 断言
//	assert(src != NULL);  // 断言
//	while (*dest++ = *src++)   // 把src指向的字符串拷贝到dest
//	{                     // 指向的空间，包含‘\0’字符
//		;
//	}
//	return ret;          // 返回的是目的地的地址
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	// strcpy字符串拷贝
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//// const讲解
//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	// const放在指针变量的* 左边时，修饰的是* p
//	// 也就是说：不能通过p来改变*p(num)的值
//	*p = 20;    // error
//	int* const p = &num;
//	// const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	int n = 200;
//	p = &n;    // error
//	printf("%d\n", num);
//	return 0;
//}

//// 自写函数my_strlen()用来计算字符串长度，最好方法
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while(*str != '\0')
//	{
//		count++;  
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

// 常见三类错误
// 1.编译型错误：直接看错误提示信息（双击）
// 2.链接型错误：要么是没有定义（不存在），要么是写错了（大写写成小写或相反）
// 3.运行时错误：借助调试，逐步定位问题