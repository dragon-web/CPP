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
//ȴʡ����
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
//ȫȱʡ����
void Fun(int a = 10, int b = 15, int c = 6)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
//��ȱʡ����
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
//��Ҫע��ľ��ǰ�ȱʡ�����ڵ��õ�ʱ��ֵ�����Ǵ����������θ�ֵ��
//���ȱʡ���βα���Ҫ��ʵ�θ�ֵ�������ڵ��õ�ʱ�����ʹ�õ������ֵ
//ȱʡ���������ں����������Ͷ�����ͬʱ����
//���磺int Fun2(int a = 10);
//      int Fun2(int a = 20)
// ��������ں����������Ͷ�����ʹ���˲�ͬ��ȱʡֵ�����������޷�ʶ��ʹ���ĸ�ȱʡֵ

//��������
/*C++������������ͬ�����Ǻ������β��б��������������ͣ�����˳��ͬ����
�����������������Ƶ����������Ͳ�ͬ������*/

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