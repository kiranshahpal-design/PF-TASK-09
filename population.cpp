#include<iostream>
using namespace std;
int main()
{
	int year;
	float popA = 5000, popB = 8000;
	float rateA = 4, rateB = 2;
	for (year = 0; popA<popB; year++)
	{
		popA+=popA*rateA/100;
		popB+=popB*rateB/100;
	}
	cout<<"After"<<year<<"years:"<<endl;
	cout<<"Population of town A="<<popA<<endl;
	cout<<"Population of town B="<<popB<<endl;
	return o;
	}