#include<iostream>
#include<stdio.h>
using namespace std;
//系统对于函数默认为有个this指针
/*class Test
{
public:
	void SetData(int data = 0)
	{
		//Test const* this  隐藏的this 指针，指向当前对象的地址
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
//对私有对象操作不了可以通过对公有对象函数的操作进行私有对象的操作
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
//C++语法中的函数
//1：构造函数

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