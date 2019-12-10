#include<iostream>
using namespace std;

class Test
{
public:
	//普通构造函数
	Test(int d = 0) :m_data(0) //参数列表初始化
	{
		cout << "Create Test Object " << endl;
	}
public:
	Test(const Test&t)
	{
		cout << "Copy Create Test Object " << endl;
	}
public:
	void GitData() const
	{
		cout << m_data << endl;
	}

	Test &operator = (const Test &t)
	{
		cout << "Assign:" << this << &t << endl; 
	}
	~Test()
	{
		cout << "Free Test Object:" << endl;
	}
private:
	int m_data;
};

void fun(Test x)
{
	int value = x.GitData;
	Test tmp(value);
}






//int main()
//{
//	Test t(1);
//	Test t1 = t;//都是拿对象初始化对象,调动拷贝构造函数
//	Test t1(t);//都是拿对象初始化对象，调动拷贝构造函数
//	Test fun(t);
//	//函数的参数是对象在调动函数的时候也会调动对象的拷贝构造函数
//	//函数的返回值是以对象的值的形式返回的时候在返回的时刻也会调动拷贝构造函数
//	system("pause");
//	return 0;
//}