#include<iostream>
using namespace std;
namespace N1
{
	int a1 = 2;
	int b1 = 3;
	char a = 'A';
	double b = 3.1415926;
	float c = 852;
	int ADD(int left, int right)
	{
		return left + right;
	}
}
namespace N2
{
	int Sub(int left, int right)
	{
		return left - right;
	}
}
/*using namespace N1;
int main()
{
	cin >> b;
	cin >> c >> c;
	cout << a << endl;
	//printf("%d",b);
	system("pause");
	return 0;
};*/
//却省参数
void print(int a = 0)
{
	cout << a << endl;
}

/*int main()
{
	print(55941124);
	//cout << print() << endl;
	system("pause");
	return 0;
}*/
//全缺省参数
void Fun(int a = 10, int b = 15, int c = 6)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
//半缺省参数
void Fun1(int a1, int b2 = 10, int c1 = 5)
{
	cout << a1 << endl;
	cout << b2 << endl;
	cout << c1<< endl;
}

/*int main()
{
	Fun1(1);
	system("pause");
	return 0;
}*/
//需要注意的就是半缺省函数在调用的时候赋值必须是从左往右依次赋值，
//这个缺省的形参必须要用实参赋值，否则在调用的时候这个使用的是随机值
//缺省函数不能在函数的声明和定义中同时出现
//例如：int Fun2(int a = 10);
//      int Fun2(int a = 20)
// 函数如果在函数的声明和定义中使用了不同的缺省值，编译器将无法识别使用哪个缺省值

//函数重载
/*C++中允许函数名相同，但是函数的形参列表（参数个数，类型，或者顺序不同），
常常用来处理功能类似但是数据类型不同的问题*/

/*int ADD(int left,int right)
{
	return left + right;
}
double ADD( double left, double right)
{
	return left + right;
}
long ADD(long  left, long right)
{
	return left + right;
}
int main()
{
	ADD(1, 5);
	ADD(10.0, 5.0);
	ADD(1L, 5L);
	int num = ADD(1L, 5L);
	cout << num << endl;

	system("pause");
	return 0;
}
*/

void Test(int a = 10)
{
	cout << "void Test(int)" << endl;
}

void Test(float a)
{
	cout << "void Test(int2)" << endl;
}

int main()
{
	 Test();
	system("pause");
	return 0;
}