#include<iostream>
using namespace std;

class Test
{
public:
	//��ͨ���캯��
	Test(int d = 0) :m_data(0) //�����б��ʼ��
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
//	Test t1 = t;//�����ö����ʼ������,�����������캯��
//	Test t1(t);//�����ö����ʼ�����󣬵����������캯��
//	Test fun(t);
//	//�����Ĳ����Ƕ����ڵ���������ʱ��Ҳ���������Ŀ������캯��
//	//�����ķ���ֵ���Զ����ֵ����ʽ���ص�ʱ���ڷ��ص�ʱ��Ҳ������������캯��
//	system("pause");
//	return 0;
//}