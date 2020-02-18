#include"TSMatrix.h"
int main()
{
	TRIPLE_HEAD *trip, *revTrip;

	trip = initTriple();

	showTriple(*trip);
	revTrip = revange(*trip);

	showTriple(*revTrip);//转置之后的稀疏矩阵
	system("pause");
	return 0;
}