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
////ʹ�ó���  1.������ 2.������ֵ
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
//�����ڶ���ʱ�����ʼ��
//�������ͱ��������ʵ��������ͬһ������
//����һ������һ��ʵ����ٲ��ܼ���������ʵ��
//���õĵײ�ʵ���൱��ָ��

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
//��������

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
//����������Ҫע�������Ͷ����ʱ��Ҫ�ֿ����ֿ������׳���

//auto�ؼ���
//auto��һ���������������ʱ�����ͱ���һ�¡�
//auto�������β����ͣ��������޷���a��ʵ�����ͽ����Ƶ�
//auto����ֱ��������������
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

//c++�е�forѭ��
//c++�е�forѭ����c�����е�forѭ���ڸ�ʽ���в�𣬵����ڱ����ϻ���һ���ģ�
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
////��Ͷ���
struct Student//��C++�и�ϲ����class����struct
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
	s.SetStudentInfo("ŷ��","��",20);//�ַ����Ĺ��ײ��õ��µ�
	s.PrintStudentInfo();

	system("pause");
	return 0;
}











