//class Test
//{
//public:
//	Test()  //�൱��ϵͳ��Ĭ�Ϲ��캯�����Լ����幹�캯���ͻὫϵͳ�Ĺ��캯�����ǵ�
//	{
//	}
//private:
//	int m_data;
//};
//�޲κ�����ȫȱʡ�ĺ�����Ĭ�Ϲ��캯��������ֻ����һ��
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

//��������
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
	//�������캯��,�������const������Ҫ�󣬵����������﷨Ҫ��
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

//һ��������ֻ����һ����������
//��ֵ��� Ҳ��Ϊ�Ⱥŵ�����


int main()
{
	Test t(10);
	Test t1 = t;
	Test t2(t1);
	system("pause");
	return 0;
}