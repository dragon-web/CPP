#include"TSMatrix.h"
int main()
{
	TRIPLE_HEAD *trip, *revTrip;

	trip = initTriple();

	showTriple(*trip);
	revTrip = revange(*trip);

	showTriple(*revTrip);//ת��֮���ϡ�����
	system("pause");
	return 0;
}