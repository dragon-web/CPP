#include<iostream>
#include<stdio.h>
using namespace std;
//ϵͳ���ں���Ĭ��Ϊ�и�thisָ��
/*class Test
{
public:
	void SetData(int data = 0)
	{
		//Test const* this  ���ص�this ָ�룬ָ��ǰ����ĵ�ַ
		m_data = data;
	}
	int GetData()
	{
		return this->m_data;
	}
	int GetValue()
	{
		 
	}
public: 
	void ShowData()
	{
		printf("%d", m_data);   
	}
private:
	int m_data;

};
//��˽�ж���������˿���ͨ���Թ��ж������Ĳ�������˽�ж���Ĳ���
*/

class CGoods
{
public:
	void RegisterGoods(char* name, int count, float price);
	void SetName(char* name);
	void SetName(char* name)
	{
		strcpy(this->name, name);
	}
	void SetCount(int count);
	void SetCount(int count)
	{
		this->count = count;
	}
	void SetPrice(float price);
	void SetPrice(float price)
	{
		price = this->count * this->price;
	}
public:
	char* GetName();
	char* GetName()
	{
		return this->name;
	}
	int GetCount();
	int GetCount()
	{
		return this->count;
	}
	float GetPrice();
	float GetPrice()
	{
		return this->total_price;
	}
	float GetTotalPrice();
	float GetTotalPrice()
	{
		return this->total_price;
	}
public:
	void RegisterGoods(char* name, int count, float price)
	{
		strcpy(this->name, name);
		this->count = count;
		this->price = price;
	}
private:
	char  name[10];
	int count;
	float price;
	float total_price;
};
int main()
{
	system("pause");
	return 0;
}
//C++�﷨�еĺ���
//1�����캯��

//class Test
//{
//private:
//	Test(int data = 0)
//	{
//
//	}
//public:
//	int data;
//};
//
//int main()
//{
//	system("pause");
//	return 0;
//}