#include <stdio.h>
// 1.�ṹ����һЩֵ�ļ��ϣ���Щֵ����Ϊ��Ա�������ṹ���ÿ����Ա�����ǲ�ͬ���͵ı���
// 2.�ṹ������
// struct tag
// {
//  	member - list;
//  }variable-list;       //�����б���s1,s2,s3;(һ�㲻ͬ��ȫ�ֱ�������)

////����һ��ѧ����һЩ����
//struct Stu       //struct�ṹ��Ĺؼ��֣�Stu�нṹ���ǩ��Sstruct Stu-�ṹ������
//{
//	//��Ա����
//	char name[20];
//	short age;            // ����ṹ�����ͣ��˿�����û��ռ�ڴ棩���൱��ͼֽ  
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;               // s1,s2,s3������ȫ�ֱ�����������ͬ   
//
//int main()
//{
//	struct Stu s1;    // �����ṹ���������ʱռ�ڴ棩���൱�ڽ��õķ���
//					 // �˴���s�Ǿֲ��Ľṹ�����
//	return 0;
//}
//
//typedef struct Stu       // typeof�Ѵ�����������һ������Stuu,�˴�Stuu������
//                         //�˷�������
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

// 3.�ṹ���Ա�����ͣ���������ͨ��������ָ�룬���飬�����������ṹ��
// 4.�ṹ������Ķ���ͳ�ʼ��
//int main()
//{
//	Stuu s2 ={"����",20,"19583593346","��"};   //��ʼ��Ҳ��{}
//	return 0;
//}
//// ����
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
//	printf("%s\n", t.ch);    // �ṹ���Ա�ķ���
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
//	Stu s = { "����",19,"19583593346","Ů" };
//	// ��ӡ�ṹ�����ݣ�print2�����ã������ǵ�ַ�������ٿ���ռ�ڴ�
//	// ��print1������Ҫ�¿���һ���ռ䣬ռ�ڴ�
//  // ��������ʱ����������Ҫѹջ�ģ��������һ�����������ʱ��
//  // �ṹ�����,����ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�
//	print1(s);
//	printf("\n");
//	print2(&s);       //����ַ
//	return 0;
//}

// ջ��: - �ֲ���������������ʽ��������������Ҳ���ٿռ�
// ����: - ��̬�ڴ���䣬malloc/free,realloc,calloc
// ��̬���� - ȫ�ֱ�������̬����
// ���εĹ����д���ѹջ������һ��Ԫ�أ�ѹջ  ��ɾ��һ��Ԫ�أ���ջ����
// ջ�����ݽṹ�ص㣺�Ƚ�ջ�ĺ�������ջ���ȳ�����ջ���룩
// ����ջ֡�Ĵ���������

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

// test.c            ��ִ�г���
// Debug(���԰汾)  Debug�汾�Ŀ�ִ�г��򣨰���������Ϣ�������Ż������ڵ��Գ���

// Release(�����汾) Release�汾�Ŀ�ִ�г������������˸����Ż�(������)���ǵó����ڴ����С������
//                                     �ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ�ã�

// fn + F5 -��������-��F9��ϵ��� 
// �ϵ�-F9�л��ϵ㣨��㣩-����ִ�е��˴�ֹͣ���һ��ϵ㣬����ѡ��������
// �����-F10���Ѻ�������һ�����̣�ִ��ʱֱ������������������У�
// �����-F11��������������뺯���ڲ���   shift + fn + F11(������ǰ���ڵĺ����ڲ�)

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

// �Զ����ڣ��Զ�����������еı������й۲죩

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
//// ʾ��1.��1��+2��+3����+n��  ���������
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
//	printf("%p\n", arr);    // Debug�汾�� i�ĵ�ַ����arr�ĵ�ַ��Release�汾�Ż���ͱ���
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	printf("hehe!");
//	//	arr[i] = 0;     // �˴�Խ����ʣ�����arrֻ��10��Ԫ�أ������������13��
//	//}                   // arr[12]=0ʱ��i�����0�����¿�ʼ��&arr[12] = &i
//	//system("pause");
//	return 0;           // ���ͣ�arr��i�����ֲ��������Ƿ���ջ����ģ�ջʹ�ÿռ��ϰ����
//	                    // ��ʹ�øߵ�ַ����ʹ�õ͵�ַ,����arr�ĵ�ַ��i��ַ������
//	                    // �����������±����������ַ�ɵ͵��߱仯���������������ʵ�����Խ�磬
//	                    // ���п�����Խ��Ĺ���������i��������Խ��ı������ʱ��Ϳ��ܸı�i
//	                    // �Ϳ��ܵ��³�����ѭ������ͬ��������Խ���λ�ÿ����ǲ�ͬ�ģ�
//}   //��C������ȱ�ݡ�
////  1.ջ����Ĭ��ʹ�ÿռ� ����ʹ�øߵ�ַ�Ŀռ䣬��ʹ�õ͵�ַ�Ŀռ䣻 
////  2.���������±����������ַ�ɵ͵��߱仯

//����Լ�����ʵ��strcpy����
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
////	if (dest != NULL && src != NULL)   // ������������
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
////void my_strcpy(char* dest,const char* src)  // *srcǰ����const,�����ٱ��ı�
////{
////	assert(dest != NULL);  // ��������Ϊ�棬���Բ������κ�����
////	assert(src != NULL);   // ����
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
////	my_strcpy(arr1, arr2);// strcpy�ַ�������
////	printf("%s\n", arr1);
////	return 0;
////}
//
////�Ż�
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;    //����Ԫ�ص�ַ������
//	assert(dest != NULL); // ����
//	assert(src != NULL);  // ����
//	while (*dest++ = *src++)   // ��srcָ����ַ���������dest
//	{                     // ָ��Ŀռ䣬������\0���ַ�
//		;
//	}
//	return ret;          // ���ص���Ŀ�ĵصĵ�ַ
//}
//int main()
//{
//	char arr1[] = "##########";
//	char arr2[] = "bit";
//	// strcpy�ַ�������
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//// const����
//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	// const����ָ�������* ���ʱ�����ε���* p
//	// Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	*p = 20;    // error
//	int* const p = &num;
//	// const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	int n = 200;
//	p = &n;    // error
//	printf("%d\n", num);
//	return 0;
//}

//// ��д����my_strlen()���������ַ������ȣ���÷���
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

// �����������
// 1.�����ʹ���ֱ�ӿ�������ʾ��Ϣ��˫����
// 2.�����ʹ���Ҫô��û�ж��壨�����ڣ���Ҫô��д���ˣ���дд��Сд���෴��
// 3.����ʱ���󣺽������ԣ��𲽶�λ����