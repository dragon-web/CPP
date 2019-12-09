//class Test
//{
//public:
//	Test()  //相当于系统的默认构造函数，自己定义构造函数就会将系统的构造函数覆盖掉
//	{
//	}
//private:
//	int m_data;
//};
//无参函数和全缺省的函都是默认构造函数，并且只能有一个
//class Test
//{
//public:
//	Test()
//	{
//		m_data = 0;
//	}
//private:
//	int m_data;
//};

//析构函数
#include<iostream>
#include<stdio.h>
using namespace std;
class Test
{
public:
	Test(int data = 0)
	{
		cout << "Create Test Object:" << this << endl;
		m_data = data;
	}
	//拷贝构造函数,这里面的const是语意要求，但是引用是语法要求
	Test(const Test &t)
	{
		cout << "Copy Creat Test Object" << endl;
		m_data = t.m_data;
	}
	Test& operator = (const Test &t)
	{
		cout << "Assign" << endl;
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	}

	~Test()
	{
		cout << "Free Test Object:" << this << endl;
	}
private:
	int m_data;
};

//一个类里面只能有一个析构函数
//赋值语句 也称为等号的重载


int main()
{
	Test t(10);
	Test t1 = t;
	Test t2(t1);
	system("pause");
	return 0;
}