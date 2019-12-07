#define _CRT_SECURE_NO_WARNINGS 

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
//#include<time.h>
//void Testref()
//{
//	int a = 10;
//	int &ra = a;
//	int &b = ra;
//	int &c = b;
//	printf("%p %p %p %p", a, ra, b, c);
//}
//void TestConstref()
//{
//	const int a = 10;
//	const int &ra = a;
//}
////使用场景  1.做参数 2.做返回值
//void Swap(int & a, int &b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int & Count()
//{
//	static int n = 0;
//	n++;
//	cout << n << endl;
//	return n;
//}
//int& Add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//引用在定义时必须初始化
//引用类型必须和引用实体类型是同一种类型
//引用一旦引用一个实体就再不能集引用其他实体
//引用的底层实现相当于指针

//int main()
//{
//	/*int a = 5;
//	int b = 10;
//	Swap(a,b);
//	cout << a <<"  "<< b << endl;*/
//	//Count();
//	//int& ret = Add(1, 2);
//	//Add(3, 4);
//	//cout << "Add(1,2) is :" << ret << endl;
//	int a = 10;
//	int &b = a;
//	b = 10; 
//
//	int a1 = 10;
//	int *p = &a1;
//	*p = 115;
//	system("pause");
//	return 0;
//}
////////////////////////////////////////////////////////////////////
//内联函数

//inline void f(int i);
//void f(int i)
//{
//	cout << i << endl;
//}
//
//int main()
//{
//	f(10);
//	system("pause");
//	return 0;
//}
//内联函数需要注意声明和定义的时候不要分开，分开很容易出错

//auto关键字
//auto在一行中声明多个变量时，类型必须一致。
//auto不能做形参类型，编译器无法对a的实际类型进行推导
//auto不能直接用来声明数组
//
//int TestAuto()
//{
//	return 10;
//}
//int main()
//{
//	int a = 10;
//	auto b = &a;
//	auto* c = &a;
//	//auto& d = TestAuto();
//	
//	system("pause");
//	return 0;
//}

//c++中的for循环
//c++中的for循环和c语言中的for循环在格式上有差别，但是在本质上还是一样的；
//void TestFor()
//{
//	int array[] = { 0,1,5,9 };
//	for (int e : array)
//  		e *= 2;
//	for (int& e : array)
//		cout << e << "  ";
//}
//
//int main()
//{
//	TestFor();
//	system("pause");
//	return 0;
//}
////类和对象
struct Student//在C++中更喜欢用class代替struct
{
	char _name[20];
	char _gender[3];
	int _age;
	void SetStudentInfo(const char* name, const char* gender, int age)
	{
		strcpy(_name, name);
		strcpy(_gender, gender);
		_age = age;
	}
	void PrintStudentInfo()
	{
		cout << _name << " " << _gender <<" "<< _age << endl;
	}
};

int main()
{
	Student s;
	s.SetStudentInfo("欧巴","男",20);//字符串的功底不好导致的
	s.PrintStudentInfo();

	system("pause");
	return 0;
}











